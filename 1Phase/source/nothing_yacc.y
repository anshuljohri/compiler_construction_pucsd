%{
#include<stdio.h>
#include<stdlib.h>
  extern FILE *yyin;
  int yyerror(char *);
  %}

%token AND ARRAY Begin CASE CHARACTER CONSTANT DO ELSE END FLOAT FUNCTION IDENTIFIER IF INTEGER INTNUM FLOATNUM CHARCONST RelOp AddOp MulOp MOD NOT OF OR PROCEDURE PROGRAM READ RETURN STRINGCONSTANT THEN VAR WHILE WRITE COL DDOT

%nonassoc ';'
%nonassoc ','
%nonassoc "'"
%nonassoc STRINGCONSTANT
%nonassoc THEN
%nonassoc OF
%nonassoc ELSE
%nonassoc COL
%nonassoc OR
%nonassoc AND
%left RelOp
%left AddOp
%left MulOp MOD
%right NOT
%left '(' ')' '[' ']'

%%
Program: PROGRAM IDENTIFIER ';' DeclSet SubProgs Block                                                   {printf("\t\tProgram is Syntactically Correct \n");}  

       | PROGRAM IDENTIFIER ';' SubProgs Block                                                           {printf("\t\tProgram is Syntactically Correct \n");}  

       | PROGRAM IDENTIFIER ';' DeclSet Block                                                            {printf("\t\tProgram is Syntactically Correct\n");}

       | PROGRAM IDENTIFIER ';' Block                                                                    {printf("\t\tProgram is Syntactically Correct\n");}    
       ;

DeclSet: SubProg VAR Decls 
       | VAR Decls
       ;

Decls  : Idents ':' Type ';'
       | Decls Idents ':' Type ';'
       ;

Idents : IDENTIFIER
       | Idents ',' IDENTIFIER
       ;

Type   : StdType
       | ArrayType
       ;

StdType: INTEGER
       | FLOAT
       | CHARACTER
       ;

ArrayType: ARRAY '[' Dim ']' OF StdType 
       ;

Dim   : INTNUM DDOT INTNUM 
      | CHARCONST DDOT CHARCONST
      ;

SubProgs: SubProgs SubProg ';'
      | SubProg ';' 
      ;

SubProg: Head DeclSet Block
      | Head Block
      ;

Head  : FUNCTION IDENTIFIER Args':' StdType ';'
      | FUNCTION IDENTIFIER ':' StdType ';'
      | PROCEDURE IDENTIFIER Args ';'
      | PROCEDURE IDENTIFIER ';'
      ;

Args  : '(' Params ')'
      ;

Params: Idents ':' Type
      | Params ';' Idents ':' Type
      ;

Stmt  : Assignment
      | IfStmt
      | WhileStmt
      | CaseStmt
      | Invocation
      | IOStmt
      | Block
      | Return
      ;

Assignment: Variable COL Expr
      ;

WhileStmt: WHILE Expr DO Stmt
      ;

CaseStmt: CASE Expr OF Cases END
      | CASE Expr OF END
      ;

Cases : CaseElt
      | Cases ';' CaseElt
      | Cases ';'
      | ';' CaseElt
      | ';'
      ;

CaseElt: CaseLabels ':' Stmt
      ;

CaseLabels: INTNUM
      | FLOATNUM
      | CHARCONST
      | CaseLabels ',' INTNUM
      | CaseLabels ',' FLOATNUM
      | CaseLabels ','CHARCONST
      ;

IfStmt: IF Expr THEN Stmt ELSE Stmt
      | IF Expr THEN Stmt
      ;

IOStmt: READ '(' Variable ')'
      | WRITE '(' Expr ')'
      | WRITE '(' STRINGCONSTANT ')'
      ;

Invocation: IDENTIFIER '(' ')'
      | IDENTIFIER '(' Exprs ')'
      ;

Block : Begin Stmts END 
      ;

Stmts : Stmt
      | Stmts ';' Stmt
      ;

Return: RETURN Expr
      ;

Exprs : Expr
      | Exprs ',' Expr
      ;

Expr  : Expr RelOp Expr
      | Expr AddOp Expr
      | Expr OR Expr
      | Expr AND Expr
      | Expr MulOp Expr
      | NOT Expr
      | Factor
      ;

Factor: Variable
      | INTNUM
      | FLOATNUM
      | CHARCONST
      | STRINGCONSTANT
      | '(' Expr ')'
      | Function
      ;
 
Variable: IDENTIFIER
      | IDENTIFIER '[' Expr ']'
      ;

Function: IDENTIFIER '(' ')'
      | IDENTIFIER '(' Exprs ')'
      ;
	
%%
main(int argc, char *argv[])
{
  if(argc > 1)
    {
      FILE *fp;
      fp=fopen(argv[1],"r");
      if(!fp)
	{
	  printf("Error in Opening the file\n");
	  exit(0);
	}
      yyin=fp;
    }
    yyparse();
}
