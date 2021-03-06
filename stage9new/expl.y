%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "exptree.h"
	#include "sym_table.h"
	#include "codegen.h"
	#include "lsym_table.h"

	#define YYSTYPE struct tnode*

	extern FILE *yyin;

	int yylex();
	int GDeclOver = 0;
	int yyerror(char *);
	struct Lsymbol *LST = NULL;	//LST for each function and main
	int var_type;
	int nextLocation = 1;		//used for local variable binding
%}

%token ID READ ASGN NEWLINE WRITE PLUS MUL SUB DIV EVAL IF THEN ELSE WHILE DO ENDWHILE ENDIF LT GT EQ NEQ STMT BREAK CONTINUE BEG END DECL ENDDECL INT BOOL MAIN RET ARGS AND OR LE GE BRKP
%nonassoc GT LT EQ NEQ AND OR LE GE
%left PLUS SUB
%left MUL DIV


%%
//global definitions block
Program : GDefblock FdefList Mainblock {}
	| GDefblock Mainblock {}
     ;

GDefblock : DECL decllist ENDDECL {GDeclOver = 1;}
	| DECL ENDDECL {GDeclOver = 1;}
	;

decllist : decl decllist {}
	| decl {}
	;

decl : type varlist ';' {}
	;

type : INT { var_type = INT;}
	| BOOL {var_type = BOOL;}

varlist : varlist ',' var {}
	| var {};

var : ID '[' INT ']' {
		if (Glookup($1->NAME) != NULL){			//if array already exists exit
			printf("Already declared\n");
			exit(-1);
		}
		if ($3->TYPE != INT) {
			printf("Type error in int array declaration.\n");	//if array declaration doesnt contain an integer exit
			exit(-1);
		}
		if (var_type == INT)
			Ginstall($1->NAME, INTARR, 1*$3->VALUE, NULL);		//install integer array
		else
			Ginstall($1->NAME, BOOLARR, 1*$3->VALUE, NULL);		//install boolean array
	}
	| ID {
		if (Glookup($1->NAME) != NULL){			//if variable already exists exit
			printf("Already declared\n");
			exit(-1);
		}
		Ginstall($1->NAME, var_type, 1, NULL);		//else install the integer variable/boolean variable
	}
	| ID '(' arglist ')' {				//if function name already exists exit
		if (Glookup($1->NAME) != NULL){
			printf("Already declared\n");
			exit(-1);
		}
		Ginstall($1->NAME, var_type, -1, (struct Paramstruct*)$3);	//install the function with the parameters
	}
	;
//function definitions
FdefList : FdefList Fdef {}		
	| Fdef {}
	;

Fdef : type ID '(' arglist ')' '{' LDefBlock Body '}' {
		//Ginstall($2->NAME, var_type, -1, $3);
		if (Glookup($2->NAME) == NULL){			//if function has not yet been declared in global declarations exit
			printf("%s not defined\n", $2->NAME);
			exit(-1);
		}
		struct Paramstruct *p = Glookup($2->NAME)->paramlist;	//get the parameters list from GST
		struct Paramstruct *t = (struct Paramstruct *)$4;	//get the parameters from function definition header
		while (t != NULL && p != NULL){
			printf("%s %s\n", p->name, t->name);
			if (t->type != p->type){			//match the types of both parameter list
				printf("Argument types don't match 1\n");
				exit(0);
			}
			if (strcmp(t->name, p->name) != 0){		//match the names of both parameters
				printf("Argument names don't match\n");
				exit(0);
			}
			t = t->next;
			p = p->next;
		}
		if (t != NULL || p != NULL){			//if number of arguments dont match exit
			printf("Incorrect number of arguments 1\n");
			exit(0);
		}

		int argBinding = -3;	//binding for arguments starts from -3 [BP-3]
		p = (struct Paramstruct*)$4;
		while(p != NULL){		// Adding parameters to local symbol table
			LLookup(p->name)->binding = argBinding;		//adding the binding in LST
			printf("%s %d\n", p->name, LLookup(p->name)->binding);
			argBinding--;	
			p = p->next;
		}
		
		struct Lsymbol *l = LST;//find the size of local symbol table
		int size = 0;
		while (l != NULL){
			if (l->binding < 0){
				l = l->next;
				continue;
			}
			size++;
			l = l->next;
		}
		Glookup($2->NAME)->size = size;	//size of local symbol table of a function.Space to be pushed in stack
		Glookup($2->NAME)->local = LST;	//set current LST as local symbol table for the function
		codeGenStart($8, $2->NAME); //start codegeneration for the function body
		LST = NULL;	//set LST to null for the next function
		nextLocation = 1;	//reset binding for local variable
	}
	;

arglist : arg ',' arglist {			//argument list
		if (GDeclOver){
			Linstall(((struct Paramstruct*)$1)->name, ((struct Paramstruct*)$1)->type, 1); //install arguments in LST of the function
			nextLocation = 1;
		}
		printf("%s\n", ((struct Paramstruct*)$1)->name);	
		((struct Paramstruct*)$1)->next=((struct Paramstruct*)$3);	//forming a linked list
		$$=$1;
	}
	| arg {
		printf("%s\n", ((struct Paramstruct*)$1)->name);
		if (GDeclOver){
			Linstall(((struct Paramstruct*)$1)->name, ((struct Paramstruct*)$1)->type, 1);//installing arguments in LST of the function
			nextLocation = 1;
		}
		$$ = $1;
	}
	| %empty {$$ = NULL;}
	;

arg : type ID {
		struct Paramstruct *p = malloc(sizeof(struct Paramstruct));	//create a parameter node of type paramstruct
		p->name = $2->NAME;
		p->type = var_type;
		p->next = NULL;
		$$ = (struct tnode*)p;
	}
	;
//local definitions block
LDefBlock : DECL LDefList ENDDECL 	{}
	| DECL ENDDECL				{}
	;

LDefList :  LDefList LDecl {}
	| LDecl {}
	;

LDecl : type LIdList ';' {}
	;

LIdList : LIdList ',' LId {}
	| LId {}
	;

LId : ID {
		if (LLookup($1->NAME) != NULL){		//check if local variable already exists
			printf("Already declared %s", $1->NAME);
			exit(-1);
		}
		Linstall($1->NAME,var_type,1);	//install as local variable
		
	}
	;

Mainblock : INT MAIN '(' ')' '{' LDefBlock Body '}' {		//block of main function
		Ginstall("MAIN", INT, -1, NULL);		//install main in GST with no parameters
		struct Lsymbol *l = LST;
		int size = 0;
		while (l != NULL){
			if (l->binding < 0){
				l = l->next;	//find size of LST
				continue;
			}
			size++;
			l = l->next;
		}
		Glookup("MAIN")->size = size;	//space required for local variables to be pushed in  stack
		Glookup("MAIN")->local = LST;	//set LST to local symbol table of main
		codeGenStart($7, "MAIN");	//start code generation for main body
		LST = NULL;			//set LST to null once the block is complete
		nextLocation = 1;		//variable for binding is reset to 1
		exit(0);
	}
	;

Body : BEG slist RetStmt END {
		$$ = TreeCreate(-1, STMT, -1, NULL, NULL, $2, $3, NULL);	//create node with Slist and retstmt as subnodes
	}
	;

slist : slist stmt {
		if($1->TYPE != -1 || $2->TYPE != -1){		//if type of slist and stmt is not void
			printf("Type error\n");
			exit(-1);
		}
		$$ = TreeCreate(-1, STMT, -1, NULL, NULL, $1, $2, NULL);	//creat node with slist and stmt as subnodes
	}
    | stmt {
     	if($1->TYPE != -1){		//type checking for stmt
     		printf("Type error\n");
			exit(-1);
     	}
     	$$ = $1;
    }
    ;

stmt: 	ID ASGN expr ';' {	//assignment node
			if(Glookup($1->NAME) == NULL && LLookup($1->NAME) == NULL){	//variable neither in LST nor in GST
				printf("Unallocated variable '%s in asgn'\n", $1->NAME);
				exit(0);
			}
			if(LLookup($1->NAME) == NULL && Glookup($1->NAME)->paramlist != NULL){	//variable not in LST and is a function 
				printf("Cannot assign to function '%s'\n", $1->NAME);
				exit(0);
			}
			if(LLookup($1->NAME) == NULL && Glookup($1->NAME)->type != $3->TYPE){	//variable types not matching
				printf("type error: =\n");
				exit(0);
			}
			$$ = TreeCreate(-1, ASGN, -1,  $1->NAME, NULL, $1, $3, NULL);	//create node 
		}

		| READ '(' ID ')' ';' {		//reading node
			if(Glookup($3->NAME ) == NULL && LLookup($3->NAME) == NULL){		//neither global nor local variable
				printf("Unallocated variable '%s' in read\n", $3->NAME);
				exit(0);
			}
			$$ = TreeCreate(-1, READ, -1, $3->NAME, NULL, $3, NULL, NULL);		//create node
		}

		| READ '(' ID '[' expr ']' ')' ';' 	{//reading array node
			if(Glookup($3->NAME) == NULL && LLookup($3->NAME) == NULL){		
				printf("Unallocated variable '%s' in readarr\n", $3->NAME);
				exit(0);
			}
			if($5->TYPE != INT) {
				printf("type error: ARRREAD[expr]");
				exit(0);
			}
			if(Glookup($3->NAME)->type != INTARR && Glookup($3->NAME)->type != BOOLARR)	{
				printf("type error: ARRREAD");
				exit(0);
			}
	 	 	$$ = TreeCreate(-1, ARRREAD, 0, $3->NAME, NULL, $5, NULL, NULL);
		}

		| WRITE '(' expr ')' ';' {
			$$ = TreeCreate(-1, WRITE, -1, NULL, NULL, $3, NULL, NULL);
		}

		| IF '(' expr ')' THEN slist ELSE slist ENDIF ';' {
			if($3->TYPE != BOOL){
				printf("type error: IF\n");
				exit(0);
			}
			if($6->TYPE != -1){
				printf("type error: THEN\n");
				exit(0);
			}
			if($8->TYPE != -1){
				printf("type error: ELSE\n");
				exit(0);
			}
			$$ = TreeCreate(-1, IF, -1, NULL, NULL, $3, $6, $8);
		}

		| IF '(' expr ')' THEN slist ENDIF ';' {
			if($3->TYPE != BOOL){
				printf("type error: IF\n");
				exit(0);
			}
			if($6->TYPE != -1){
				printf("type error: THEN\n");
				exit(0);
			}
			$$ = TreeCreate(-1, IF, -1, NULL, NULL, $3, $6, NULL);
		}

		| WHILE '(' expr ')' DO slist ENDWHILE ';' {
			if($3->TYPE != BOOL){
				printf("type error: WHILE\n");
				exit(0);
			}
			if($6->TYPE != -1){
				printf("type error: DO\n");
				exit(0);
			}
			$$ = TreeCreate(-1, WHILE, -1, NULL, NULL, $3, $6, NULL);
		}

		| BREAK ';' {
			$$ = TreeCreate(-1, BREAK, -1, NULL, NULL, NULL, NULL, NULL);
		}

		| CONTINUE ';' {
			$$ = TreeCreate(-1, CONTINUE, -1, NULL, NULL, NULL, NULL, NULL);
		}

		| ID '[' expr ']' ASGN expr ';'	{
			if(Glookup($1->NAME) == NULL && LLookup($1->NAME) == NULL){
				printf("Unallocated variable '%s' in asgnarr\n", $1->NAME);
				exit(0);
			}
			if(!(Glookup($1->NAME)->type == INTARR || $3->TYPE == INT || $6->TYPE == INT) && !(Glookup($1->NAME)->type == BOOLARR || $3->TYPE == INT || $6->TYPE == BOOL)){
				printf("type error: []=\n");
				exit(0);
	 		}
			$$ = TreeCreate(-1, ARRASGN, -1, $1->NAME, NULL, $3, $6, NULL);
 		}
 		| ID '(' Args ')' ';' {
 			struct Paramstruct *p = Glookup($1->NAME)->paramlist;
			struct tnode *t = $3;
		
			while (t != NULL && p != NULL){
				printf("Val : %d\n", t->Ptr1->VALUE);
				if (t->TYPE != p->type){
					printf("Argument types don't match 2\n");
					exit(0);
				}
				t = t->Arglist;
				p = p->next;
			}
 			if (t != NULL || p != NULL){
 				printf("Incorrect number of arguments 2\n");
 				exit(0);
 			}
 			$$ = TreeCreate(-1, FUNCCALL, -1, $1->NAME, $3, NULL, NULL, NULL);
 		}
 		| BRKP ';' {$$ = TreeCreate(-1, BRKP, -1, NULL, NULL, NULL, NULL, NULL);}
		;

Args: Args ',' expr {$$ = TreeCreate($3->TYPE, ARGS, -1, NULL, $1, $3, NULL, NULL);}
	| expr { $$ = TreeCreate($1->TYPE, ARGS, -1, NULL, NULL, $1, NULL, NULL);}
	| %empty {$$ = NULL;}
	;

expr: expr PLUS expr {
		if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: +\n");
			exit(0);
		}
		$$ = makeOperatorNode(PLUS, INT, $1, $3);
	}

	 | expr MUL expr {
	 	if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: *\n");
			exit(0);
		}
		$$ = makeOperatorNode(MUL, INT, $1, $3);
	}

	 | expr SUB expr {
	 	if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: -\n");
			exit(0);
		}
		$$ = makeOperatorNode(SUB, INT, $1, $3);
	}
	 | SUB expr {
	 	if($2->TYPE != INT){
			printf("type error: unary -\n");
			exit(0);
		}
		$$ = makeOperatorNode(SUB, INT, 0, $2);
	}

	 | expr DIV expr {
	 	if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: /\n");
			exit(0);
		}
		$$ = makeOperatorNode(DIV, INT, $1, $3);
	}

	 | '(' expr ')'	{$$ = TreeCreate($2->TYPE, EVAL, -1, NULL, NULL, $2, NULL, NULL);}

	 | INT {$$ = $1;}

	 | BOOL {$$ = $1;}

	 | ID {
	  	if (LLookup($1->NAME) != NULL)
	 		$1->TYPE = LLookup($1->NAME)->type;
	 	else if (Glookup($1->NAME) != NULL)
	 		$1->TYPE = Glookup($1->NAME)->type;
	 	else{
	 		printf("Undeclared variable %s\n", $1->NAME);
	 		exit(-1);
	 	}
	 	$$ = $1;
	 }

	 | ID '[' expr ']'	{
	 	if($3->TYPE != INT){
	 		printf("type error: []\n");
			exit(0);
	 	}
	 	if (LLookup($1->NAME) != NULL){
	 		if(LLookup($1->NAME)->type == INTARR){
		 		$$ = makeOperatorNode(ARRVAL, INT, $1, $3);
		 	}
		 	else if(LLookup($1->NAME)->type == BOOLARR){
		 		$$ = makeOperatorNode(ARRVAL, BOOL, $1, $3);
	 		}
	 	}
	 	else if (Glookup($1->NAME) != NULL){
	 		if(Glookup($1->NAME)->type == INTARR){
		 		$$ = makeOperatorNode(ARRVAL, INT, $1, $3);
		 	}
		 	else if(Glookup($1->NAME)->type == BOOLARR){
		 		$$ = makeOperatorNode(ARRVAL, BOOL, $1, $3);
	 		}
	 	}
	 	else{
	 		printf("Undeclared array %s\n", $1->NAME);
	 		exit(-1);
	 	}
	 }

	 | expr LT expr {
	 	if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: <\n");
			exit(0);
		}
		 $$ = makeOperatorNode(LT, BOOL, $1, $3);
	 }

	 | expr GT expr {
	 	if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: >\n");
			exit(0);
		}
		 $$ = makeOperatorNode(GT, BOOL, $1, $3);
	 }

	 | expr GE expr {
	 	if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: >\n");
			exit(0);
		}
		 $$ = makeOperatorNode(GE, BOOL, $1, $3);
	 }

	 | expr LE expr {
	 	if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: >\n");
			exit(0);
		}
		 $$ = makeOperatorNode(LE, BOOL, $1, $3);
	 }

	 | expr EQ expr {
	 	if(!(($1->TYPE == INT && $3->TYPE == INT) || ($1->TYPE == BOOL && $3->TYPE == BOOL))){
			printf("type error: ==\n");
			exit(0);
		}
		 $$ = makeOperatorNode(EQ, BOOL, $1, $3);
	 }

	 | expr NEQ expr {
	 	if($1->TYPE != INT || $3->TYPE != INT){
			printf("type error: !=\n");
			exit(0);
		}
		 $$ = makeOperatorNode(NEQ, BOOL, $1, $3);
	 }
	 | expr AND expr {
	 	if($1->TYPE != BOOL || $3->TYPE != BOOL){
			printf("type error: &&\n");
			exit(0);
		}
		 $$ = makeOperatorNode(AND, BOOL, $1, $3);
	 }
	 | expr OR expr {
	 	if($1->TYPE != BOOL || $3->TYPE != BOOL){
			printf("type error: ||\n");
			exit(0);
		}
		 $$ = makeOperatorNode(OR, BOOL, $1, $3);
	 }
	 | ID '(' Args ')' {	//function call
 			struct Paramstruct *p = Glookup($1->NAME)->paramlist;//get parameters list from GST
			struct tnode *t = $3;
			while (t != NULL && p != NULL){
				if (t->TYPE != p->type){	//check if types in actual and formal arguments match
					printf("Argument types don't match 3\n");
					exit(0);
				}
				t = t->Arglist;
				p = p->next;
			}
 			if (t != NULL || p != NULL){
 				printf("Incorrect number of arguments 3\n");		//if number of arguments dont match
 				if (t != NULL)
 					printf("t\n");
 				else
 					printf("p\n");
 				exit(0);
 			}
 			$$ = TreeCreate(Glookup($1->NAME)->type, FUNCCALL, -1, $1->NAME, $3, NULL, NULL, NULL);//create function call node with args as parameters
 		}
		;

RetStmt : RET expr ';'{ $$ = TreeCreate($2->TYPE, RET, -1, NULL, NULL, $2, NULL, NULL); }		//create return node with expr as sub node
	;

%%

int yyerror(char *s){
	printf("Error: %d %s\n",yylineno, s);
	return -1;
}

int main(int argc, char **argv){
	FILE *fp;
	fp = fopen(argv[1],"r");
	yyin = fp;
	yyparse();
	return 1;
}
