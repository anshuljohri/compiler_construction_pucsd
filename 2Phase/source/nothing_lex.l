%{
#include "y.tab.h"
#include<stdlib.h>
void yyerror(char *)			;
extern yylval				;
int line_no=0                           ;
%}

Letter         [a-zA-Z] 

Digit          [0-9]

Id             {Letter}({Letter}|{Digit})*

Positive       [1-9]

Sign           [+-]        

IntNum         {Positive}{Digit}*|0

Floatnum       ({IntNum}\.{IntNum})   |   ({IntNum}\.E{Sign}{IntNum})|                                          ({IntNum}\.{IntNum}E{Sign}{IntNum})

CharConst      \'({Letter}|{Digit})\'

Constant       {IntNum}|{Floatnum}|{CharConst}

StringConst    \'{Letter}*\'

RelOp          "<"|"<="|">="|">"|"="|"<>"

AddOp          "+"|"-"

MulOp           "*"

%%


INTEGER     {printf("Token: KEYWORD      [  %s  ]\n",yytext);return INTEGER;}

FLOAT       {printf("Token: KEYWORD      [  %s  ]\n",yytext);return FLOAT;}

CHARACTER   {printf("Token: KEYWORD      [  %s  ]\n",yytext);return CHARACTER;}

ARRAY       {printf("Token: KEYWORD      [  %s  ]\n",yytext);return ARRAY;}

VAR         {printf("Token: KEYWORD      [  %s  ]\n",yytext);return VAR;}

PROGRAM     {printf("Token: KEYWORD      [  %s  ]\n",yytext);return PROGRAM;}

OF          {printf("Token: KEYWORD      [  %s  ]\n",yytext);return OF;}

FUNCTION    {printf("Token: KEYWORD      [  %s  ]\n",yytext);return FUNCTION;}

PROCEDURE   {printf("Token: KEYWORD      [  %s  ]\n",yytext);return PROCEDURE;}

WHILE       {printf("Token: KEYWORD      [  %s  ]\n",yytext);return WHILE;}

DO          {printf("Token: KEYWORD      [  %s  ]\n",yytext);return DO;}

CASE        {printf("Token: KEYWORD      [  %s  ]\n",yytext);return CASE;}

END         {printf("Token: KEYWORD      [  %s  ]\n",yytext);return END;}

IF          {printf("Token: KEYWORD      [  %s  ]\n",yytext);return IF;}

THEN        {printf("Token: KEYWORD      [  %s  ]\n",yytext);return THEN;}

ELSE        {printf("Token: KEYWORD      [  %s  ]\n",yytext);return ELSE;}

READ        {printf("Token: KEYWORD      [  %s  ]\n",yytext);return READ;}

WRITE       {printf("Token: KEYWORD      [  %s  ]\n",yytext);return WRITE;}

BEGIN       {printf("Token: KEYWORD      [  %s  ]\n",yytext);return Begin;}

RETURN      {printf("Token: KEYWORD      [  %s  ]\n",yytext);return RETURN;}

NOT         {printf("Token: KEYWORD      [  %s  ]\n",yytext);return NOT;}

MOD         {printf("Token: KEYWORD      [  %s  ]\n",yytext);return MulOp;}

OR          {printf("Token: KEYWORD      [  %s  ]\n",yytext);return OR;}

AND         {printf("Token: KEYWORD      [  %s  ]\n",yytext);return AND;}


{IntNum}    {yylval=atoi(yytext);        printf("Token: IntNum       [  %d  ]\n",atoi(yytext));   return INTNUM;}


{Floatnum}  {yylval=atof(yytext);        printf("Token: FloatNum     [  %f  ]\n",atof(yytext));   return FLOATNUM;}


{CharConst} {yylval=yytext[0];          printf("Token: CharConst    [  %s  ]\n",yytext);          return CHARCONST;}


{Id}        {yylval=*yytext;            printf("Token: Identifier   [  %s  ]\n",yytext);          return IDENTIFIER;}


{StringConst} {yylval=*yytext;          printf("Token: StringConst  [  %s  ]\n",yytext);          return STRINGCONSTANT;}


{RelOp}     {printf("Token: RelOp        [  %s  ]\n",yytext);return RelOp;}


{AddOp}     {printf("Token: AddOp        [  %c  ]\n",yytext[0]);return AddOp;}


{MulOp}     {printf("Token: MulOp        [  %c  ]\n",yytext[0]);return MulOp;}


:=          {printf("Token: AssignMent   [  %s  ]\n",yytext);return COL;}


\.\.        {printf("Token: Range [  %s  ]\n",yytext);return DDOT;}


"{"|"}"|"'"|"["|"]"|"("|")"|"."|","|";"|":"  {printf("Token: SpecialChars [  %c  ]\n",yytext[0]);                                  return yytext[0];};


[ \tr]        /* Eat Up White Spaces */
[\n]          line_no++;

\{[^\}]*\}     {printf("Eat Up COMMENTS \n");}


.             {yylval=yytext[0]; return yytext[0];}


%%


int yywrap(void)
{
return 1;
}

