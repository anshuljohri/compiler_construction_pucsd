%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "sym_tab.h"
  extern FILE *yyin;
  void yyerror(char *);
  extern int line_no;
  extern char *symbol;
  %}

%token AND ARRAY Begin CASE CHARACTER CONSTANT DO ELSE END FLOAT FUNCTION IDENTIFIER IF INTEGER INTNUM FLOATNUM CHARCONST RelOp AddOp MulOp MOD NOT OF OR PROCEDURE PROGRAM READ RETURN STRINGCONSTANT THEN VAR WHILE WRITE COL DDOT 

%nonassoc error
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
%nonassoc END
%left RelOp
%left AddOp
%left MulOp MOD
%right NOT
%left '(' ')' '[' ']'

%%

Program: PROGRAM IDENTIFIER ';' DeclSet SubProgs Block                                                   {
                            printf("\t\t----- Correct----- \n");
                          }  

| PROGRAM IDENTIFIER error DeclSet SubProgs Block                                                        { 
                            printf("\tERROR AT LINE NO. %d :';' expected\n",                               line_no); yyerrok;yyclearin;
                            printf("\t\t-----Not  Correct----- \n");
                          }
  
| PROGRAM IDENTIFIER ';' SubProgs Block                                                                 {
                             printf("\t\t----- Correct----- \n");
                         }  

| PROGRAM IDENTIFIER error SubProgs Block                                                              { 
                           printf("\tERROR AT LINE NO. %d : ';' expected\n",                              line_no); yyerrok;yyclearin;
                           printf("\t\t-----Not  Correct----- \n");
                        }  

| PROGRAM IDENTIFIER ';' DeclSet Block                                                                 {
                          printf("\t\t----- Correct----\n");
                        }

| PROGRAM IDENTIFIER error DeclSet Block                                                               { 
                          printf("\tERROR: AT LINE NO. %d :';' expected\n",                              line_no); yyerrok;yyclearin;
                          printf("\t\t-----Not  Correct----\n");
                        }

| PROGRAM IDENTIFIER ';' Block                                                                         {
                           printf("\t\t---- Correct----\n");
                        }    

| PROGRAM IDENTIFIER error Block                                                                       { 
                          printf("\tERROR AT LINE NO. %d:  ';' expected  token\n",line_no); yyerrok;yyclearin; 
                          printf("\t\t----Not  Correct----\n");
                        }    
;

//-----------------------------------------------------------------------------

DeclSet: SubProg VAR Decls
| VAR Decls 

;

//-----------------------------------------------------------------------------

Decls  : Idents ':' Type ';'
| Idents error Type ';'    {
                            printf("\tERROR AT LINE %d: ':' token expected after Identifiers\n",line_no);yyerrok;yyclearin; 
                           }
 
| Idents ':' Type error    { 
                             printf("\tERROR AT LINE %d: ';' token expected after Type Declaration\n",line_no); yyerrok;yyclearin                             ; 
                            }
 
| Decls Idents ':' Type ';' 

| Decls Idents error Type ';' { 
                               printf("\tERROR AT LINE %d : ':' token expected after Identifiers",line_no); yyerrok;yyclearin; 
                               }
 
| Decls Idents ':' Type error { 
                               printf("\tERROR AT LINE %d : ';' token expected after Type Declaration\n",line_no);                                            yyerrok;yyclearin; 
                              }
;

//----------------------------------------------------------------------------

Idents : IDENTIFIER {printf("\t\tIDENTIFIER is %s\n",symbol); if(Insert(symbol)) printf("Insert Successfully\n");}
| Idents ',' IDENTIFIER {printf("\t\t IDENTIFIER is %s\n",symbol); if(Insert(symbol)) printf("Insert Successfully\n"); }
| Idents error IDENTIFIER      { 
                              printf("\tERROR AT LINE %d : ',' expected betweenIdentifiers\n",line_no);  yyerrok;yyclearin; 
                             }  
;

//-----------------------------------------------------------------------------

Type   : StdType 
| ArrayType  
;

//-----------------------------------------------------------------------------

StdType: INTEGER
| FLOAT         
| CHARACTER     
| error                   { 
                               printf("\tERROR AT LINE %d : Std Type Missing\n"                               ,line_no);  yyerrok;yyclearin;
                          }
;

//----------------------------------------------------------------------------

ArrayType: ARRAY '[' Dim ']' OF StdType 

| ARRAY error Dim ']' OF StdType { 
                                  printf("\tERROR AT LINE %d : '[' expected    after ARRAY token\n",line_no);                                                 yyerrok;yyclearin; 
                                 }

| ARRAY '[' Dim error OF StdType { 
                                  printf("\tERROR AT LINE %d : ']' expected    before OF token\n",line_no);                                                   yyerrok;yyclearin; 
                                  }

| ARRAY '[' Dim ']' error StdType { 
                                   printf("\tERROR AT LINE %d : Array without  OF keyword\n",line_no); yyerrok;yyclearin; 
                                  }
;

//-----------------------------------------------------------------------------

Dim   : INTNUM DDOT INTNUM 
| CHARCONST DDOT CHARCONST 
| INTNUM error INTNUM            { 
                                  printf("\tERROR AT LINE %d : In dimenstion ofARRAY declaration\n",line_no);                                                 yyerrok;yyclearin;
                                 }
  
| CHARCONST error CHARCONST      { 
                                 printf("\tERROR AT LINE %d : In dimenstion of ARRAY declaration\n",line_no); yyerrok;                                        yyclearin;
                                 } 
;

//-----------------------------------------------------------------------------

SubProgs: SubProgs SubProg ';'
| SubProgs SubProg error         { 
                                  printf("\tERROR AT LINE %d : ';' expected\n"                                   ,line_no );  yyerrok;yyclearin;
                                 } 
 
| SubProg ';'                 
| SubProg error                   {  
                                  printf("\tERROR AT LINE %d : ';' expected\n"                                   ,line_no);  yyerrok;yyclearin;                                                } 
;

//----------------------------------------------------------------------------

SubProg: Head DeclSet Block 
| Head Block                
;

//---------------------------------------------------------------------------

Head  : FUNCTION IDENTIFIER Args':' StdType ';'

| FUNCTION IDENTIFIER Args error  StdType ';'   {
                                                 printf("\tERROR AT LINE %d :Passing Arguments to function ':' expected\n",line_no);                                                      yyerrok; yyclearin;
                                                }

| FUNCTION IDENTIFIER Args':' StdType error    {
                                                printf("\tERROR AT LINE %d :    ';' expected after function Argument passing\n",line_no);                                                  yyerrok; yyclearin;
                                               }

| FUNCTION IDENTIFIER ':' StdType ';'          

| FUNCTION IDENTIFIER error  StdType ';'     {
                                              printf("\tERROR AT LINE %d :     Passing Arguments to function ':' expected\n",line_no);  yyerrok;                                                yyclearin;
                                             }

| FUNCTION IDENTIFIER ':' StdType error     { 
                                             printf("\tERROR AT LINE %d : ';'  expected after function Argument passing\n",line_no);  yyerrok;                                                 yyclearin;
                                            }

| PROCEDURE IDENTIFIER Args ';'                

| PROCEDURE IDENTIFIER Args error          { 
                                           printf ("';' expected\n",line_no);                                             yyerrok; yyclearin; 
                                           }    
| PROCEDURE IDENTIFIER ';'                     

| PROCEDURE IDENTIFIER error               {
                                           printf ("';' expected\n",line_no);                                             yyerrok; yyclearin; 
                                           }       
;

//---------------------------------------------------------------------------

Args  : '(' Params ')' 
| error Params ')'             {
                                printf("\tERROR AT LINE %d : '(' missing in    Function Or Procedure\n",line_no);                                             yyerrok;yyclearin;
                               }

| '(' Params error          {
                              printf("\tERROR AT LINE %d : ')' missing in      Function Or Procedure\n",line_no); yyerrok;                                    yyclearin;
                            }

;    

//----------------------------------------------------------------------------

Params: Idents ':' Type 

| Idents error Type       {
                            printf("\tERROR AT LINE %d : ':' expected in parameters before type\n",line_no);yyerrok;                                    yyclearin;
                          }

| Params ';' Idents ':' Type 

| Params error Idents ':' Type    {
                                   printf("\tERROR AT LINE %d : ';' expected in parameters before identifiers\n",line_no)                                   ; yyerrok; yyclearin;
                                  }

| Params ';' Idents error Type    {
                                    printf("\tERROR AT LINE %d : ':' expected  in parameters before Type\n",line_no);                                         yyerrok;yyclearin;
                                  }
;

//--------------------------------------------------------------------------

Stmt  : Assignment  
| IfStmt            
| WhileStmt         
| CaseStmt          
| Invocation        
| IOStmt            
| Block             
| Return            
;

//---------------------------------------------------------------------------

Assignment: Variable COL Expr 

| Variable error Expr           {
                                  printf("\tERROR AT LINE %d : In assignment   COLON missing\n",line_no); yyerrok;                                            yyclearin;
                                 } 
;

//-----------------------------------------------------------------------------

WhileStmt: WHILE Expr DO Stmt 

| WHILE Expr error Stmt        {
                                printf("\tERROR AT LINE %d : Keyword DO missing in While statement\n",line_no);                                        yyerrok;yyclearin;
                               }
;

//---------------------------------------------------------------------------

CaseStmt: CASE Expr OF Cases END
 
| CASE Expr error Cases END      {
                                   printf("\tERROR AT LINE %d : Keyword OF missing in CASE statement\n",line_no);  yyerrok;yyclearin;
                                 }

| CASE Expr OF Cases %prec error      {
                                        printf("\tERROR AT LINE %d : CASE statement without END keyword\n",line_no);  yyerrok;yyclearin;
                                       }

| CASE Expr OF END               

| CASE Expr %prec error END       {
                                   printf("\tERROR AT LINE %d : Keyword OF     missing in CASE statement\n",line_no);                                         yyerrok;yyclearin;
                                  }

| CASE Expr %prec OF error       {
                                   printf("\tERROR AT LINE %d : CASE statement without END keyword\n",line_no); yyerrok;                                      yyclearin;
                                 }
;

//---------------------------------------------------------------------------

Cases : CaseElt       

| Cases ';' CaseElt   
| Cases error CaseElt            {
                                  printf("\tERROR AT LINE %d : ';' missing     before Case Labels\n",line_no); yyerrok;                                       yyclearin;
                                 } 

| Cases ';' 
| Cases error                {
                              printf("\tERROR AT LINE %d : ';' missing in Case Statement\n",line_no); yyerrok;yyclearin;
                             }
   
| ';' CaseElt

| error CaseElt             {  
                             printf("\tERROR AT LINE %d : ';' missing before Case Labels\n",line_no); yyerrok;yyclearin;
                            } 
         
| ';'
;

//----------------------------------------------------------------------------

CaseElt: CaseLabels ':' Stmt 

| CaseLabels error Stmt       {
                               printf("\tERROR AT LINE %d : ':' missing after  Case Label\n",line_no); 
                         yyerrok;yyclearin;
                              } 
;

//-----------------------------------------------------------------------------

CaseLabels: Labels

| CaseLabels ',' Labels
   
| CaseLabels error Labels    {
                              printf("\tERROR AT LINE %d : ',' missing betweem Labels\n",line_no); 
                              yyerrok;yyclearin;
                             }   
;

//-----------------------------------------------------------------------------

Labels: INTNUM
| FLOATNUM
| CHARCONST
| error                      {
                              printf("\tERROR AT LINE %d : Label missing in Case Statement\n",line_no);
                              yyerrok;yyclearin;
                             }
;

//----------------------------------------------------------------------------

IfStmt: IF Expr THEN Stmt ELSE Stmt
 
| IF Expr error Stmt ELSE Stmt  {
                                 printf("\tERROR AT LINE %d : Keyword THEN  missing in IF statement\n",line_no);  yyerrok;yyclearin;
                                }
  
| IF Expr THEN Stmt error Stmt  {
                                 printf("\tERROR AT LINE %d : Keyword ELSE     missing in IF statement\n",line_no);                                           yyerrok;yyclearin;
                                }  

| IF Expr THEN Stmt             
    
| IF Expr error Stmt            {
                                 printf("\tERROR AT LINE %d : Keyword THEN     missing in IF statement\n",line_no);                                           yyerrok;yyclearin;
                                }  
;

//--------------------------------------------------------------------------

IOStmt: READ '(' Variable ')'   

| READ error Variable ')'     {
                               printf("\tERROR AT LINE %d : '(' missing after  READ\n",line_no); 
                                yyerrok;yyclearin;
                              }
 
| READ '(' Variable error      {
                                 printf("\tERROR AT LINE %d : ')' missing in   READ\n",line_no); 
                                 yyerrok;yyclearin;
                                }

| READ '(' error ')'            {
                                 printf("\tERROR AT LINE %d : Argument of      READ\n",line_no); 
                                 yyerrok;yyclearin;
                                }  

| WRITE '(' Expr ')'            

| WRITE error Expr ')'          {
                                 printf("\tERROR AT LINE %d : '(' missing afterWRITE\n",line_no); 
                                 yyerrok;yyclearin;
                                }
 
| WRITE '(' Expr error          {
                                 printf("\tERROR AT LINE %d : ')' missing in   WRITE\n",line_no); 
                                 yyerrok;yyclearin;
                                }

| WRITE '(' STRINGCONSTANT ')'      
;

//----------------------------------------------------------------------------

Invocation: IDENTIFIER '(' ')'

| IDENTIFIER '(' Exprs ')'  

| %prec IDENTIFIER error Exprs ')'   {
                                       printf("\tERROR AT LINE %d : '('         missing after Identifier\n",line_no);                                           yyerrok;yyclearin;
                                      }          
| IDENTIFIER '(' Exprs error        {
                                      printf("\tERROR AT LINE %d : ')' missing\n ",line_no); 
                                       yyerrok;yyclearin;
                                      }  
; 

//----------------------------------------------------------------------------

Block : Begin Stmts END

| Begin Stmts error       {
                           printf("\tERROR AT LINE %d : Begin without END keyword\n",line_no); 
                           yyerrok;yyclearin;
                          }     
;

//----------------------------------------------------------------------------

Stmts : Stmt           
| Stmts ';' Stmt       

| Stmts error Stmt     {
                         printf("\tERROR AT LINE %d : ';' missing within  Statements\n",line_no); 
                         yyerrok;yyclearin;
                        }
;

//-----------------------------------------------------------------------------

Return: RETURN Expr    
;

//-----------------------------------------------------------------------------

Exprs : Expr           
| Exprs ',' Expr       

| Exprs error Expr    {
                       printf("\tERROR AT LINE %d : ',' missing within Expressions\n",line_no); 
                        yyerrok;yyclearin;
                      }
;

//-----------------------------------------------------------------------------

Expr  : Expr RelOp Expr 
| Expr AddOp Expr       
| Expr OR Expr          
| Expr AND Expr         
| Expr MulOp Expr       
//| Expr error Expr  {
//                printf("ERROR AT LINE NO %d: Some Operator Missing",line_no);
//}       

| NOT Expr              
| Factor                
;

//----------------------------------------------------------------------------

Factor: Variable        
| INTNUM                
| FLOATNUM              
| CHARCONST             
| STRINGCONSTANT
        
| '(' Expr ')'          

| error %prec Expr ')'    {
                            printf("\tERROR AT LINE %d : '(' missing\n",line_no                            ); yyerrok;yyclearin;
                          }
   
| '(' Expr error          {
                           printf("\tERROR AT LINE %d : ')' missing\n",line_no)                           ; yyerrok;yyclearin;
                          }
| Function              
;

//---------------------------------------------------------------------------
 
Variable: IDENTIFIER {Check(symbol);}      

| IDENTIFIER '[' Expr ']'

| %prec IDENTIFIER error Expr ']'  {
                                    printf("\tERROR AT LINE %d : '[' missing\n"                                    ,line_no); yyerrok;yyclearin;
                                   }

| IDENTIFIER '[' Expr error        {
                                    printf("\tERROR AT LINE %d : ']' missing\n"                                    ,line_no); yyerrok;yyclearin;
                                   } 
;

//---------------------------------------------------------------------------

Function: IDENTIFIER '(' ')'

| IDENTIFIER '(' Exprs ')'  

| %prec IDENTIFIER error Exprs ')'  {
                                     printf("\tERROR AT LINE %d : '(' missing\n ",line_no); yyerrok;yyclearin;                                                                                    }
  
| IDENTIFIER '(' Exprs error        {
                                     printf("\tERROR AT LINE %d : '(' missing   \n",line_no); yyerrok;yyclearin;                                                                                  }
;

//---------------------------------------------------------------------------

%%

void yyerror(char *err)
{
  return;
}


int Hash_value(char *symbol)
{
  char *p;
  unsigned h=0,g;
  for(p=symbol; *p!='\0'; p++)
    {
      h=(h << 4)+(*p);
      if(g=h & 0xf0000000)
	{
	  h=h ^ (g >> 24);
	  h=h ^ g;
	}
    }
  return (h % max_no_symbols);
}

int Insert(char* new_symbol)
{
  int pc=0;
  int probe;
  int inc=1;
  Sym_tab *H;
  
  
  H=ps->items[ps->top];
  probe=Hash_value(new_symbol);
  printf("\nAddress contained in top of stack is %u\n\n",H);
  printf("\nHV of [%s] is %d and name[probe] is %s\n\n",new_symbol,probe,H->name[probe]);
  
  while(H->name[probe] !=(char*)'\0' && strcmp(new_symbol, H->name[probe]) && pc<= max_no_symbols/2)
    {
      printf("\nInside while\n");
      pc++;
      probe=(probe+inc) % max_no_symbols;
      inc+=2;
    }

  if(H->name[probe] ==(char*)'\0')
    {
      H->name[probe]=new_symbol;
      printf("\tInside if and H[probe].name is %s\n",H->name[probe]);
      return 1;
    }

  else if(strcmp(new_symbol, H->name[probe]) == 0)
    {
      perror("Same key cant be appear");
      return 0;
    }
  else
    {
      perror("Hash Table is full");
      return 0;
    }
}

int Check(char *new_symbol)
{
  int pc=0;
  int probe;
  int inc=1,i;
  Sym_tab *H;

  //  H=(Sym_tab *)malloc(sizeof(Sym_tab));

  for(i=ps->top; i>-1; i--){
    H=ps->items[i];
    probe=Hash_value(new_symbol);

    //tmp=H[probe];

    printf("Symbol is %s and probe is %d and H->name[probe] is %s and Top of stack address is %u\n",new_symbol,probe,H->name[probe],H);

    while(H->name[probe]!=(char *)'\0' && strcmp(new_symbol,H->name[probe]) && pc<= max_no_symbols/2)
      {
	printf("In check Inside while and symbol is %s and probe is %d and H->name[probe] is %s\n",new_symbol,probe,H->name[probe]);
	pc++;
	probe=(probe+inc) % max_no_symbols;
	inc+=2;
      }
    
    if(H->name[probe]!=(char *)'\0' && !strcmp(new_symbol, H->name[probe]))
      {
	printf("\nIn Check func and symbol %s is present\n",new_symbol);
	return 1;
      }
    
    else
      {
	printf("\nIn Check func and symbol %s is NOT present in %dth position of Stack\n",new_symbol,i);
      }
  }
  printf("\nSymbol %s is NOT present\n");
  return 0;
}


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

