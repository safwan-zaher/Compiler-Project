%{

# include <stdio.h>
# include <string.h>
# include <math.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdbool.h>

int yylex(void);
void yyerror(char*);
char variable[500][20]; 
int DeclaredBefore[500];
int recordTheInteger[500];
double recordTheDecimal[500];
char *recordString[500];
int maincase,subcase;
double dmaincase, dsubcase;
int intArrSize=0, doubleArrSize=0;
int funcCount=0;
int arr_int[10000];
double arr_real[10000];



int i, tmp=0;
/*takes a string x as an argument and checks if it matches 
any of the strings stored in the variable array*/
int check_the_variable(char *x)
{
    for(i=0 ; i<tmp ; i++)
    {
        if( strcmp(x,variable[i])==0 )
        {
            return i;
        }
    }
    return -1;
}



%}
%union{
  int integer;
  double real;
  char *text;
}



%token INT DECI STR BEG END NEWLINE ASSIGN INTNUMBER REALNUMBER
%token singlecmnt multicmnt VAR STRING DIVIDER SCAN FUNC
%token ARR LTB RTB LP RP PRINT SEMICOLON COMMA
%token PLUS MINUS MUL DIV MOD POWER ABSOLUTE FACTORIAL
%token INCRE DECRE EQUAL GREATER LESS GRTEQUAL LESSEQUAL NOTEQUAL 
%token OR AND NOT IF ELSE ELIF LB RB 
%token SWITCH CASE DEFAULT COLON FROM WHILE DO RANGE 
%token SIN COS TAN LOG10 LOG2
%type <text> VAR STRING singlecmnt multicmnt INT DECI STR 
%type <integer> INTNUMBER assignment assigTheVal assign_array PRINT SCAN PLUS MINUS MUL DIV MOD POWER ABSOLUTE FACTORIAL INCRE DECRE EQUAL GREATER LESS GRTEQUAL LESSEQUAL NOTEQUAL OR AND NOT
%type <integer> array_int array_real LTB RTB LP RP DIVIDER if_stmt  elif_stmt elif_stmts switchStmt defaultStmt case_stmt caseStmt LB RB loop_stmts forLoop whileLoop dowhileLoop
%type <real> REALNUMBER expression
%nonassoc IF
%nonassoc ELIF
%nonassoc ELSE
%right ASSIGN
%left ABSOLUTE
%left FACTORIAL
%left PLUS 
%left MINUS
%left MUL 
%left DIV
%left MOD
%left POWER
%left INCRE 
%left DECRE
%left NOT
%left LESS
%left GREATER
%left LESSEQUAL
%left GRTEQUAL
%left EQUAL
%left NOTEQUAL
%left OR 
%left AND
%left LB RB
%left LTB RTB
%left LP RP

%%

program: BEG statements END    { printf("\nThe program starts\n"); }
;

statements: statement              
| statements statement                    
;

statement: SEMICOLON
| singlecmnt                           
| multicmnt
//| function_definition            {     printf("\nFunction defined successfully\n"); }                  
| declaration SEMICOLON 					      {     printf("\nSuccessful Declaration\n");   }
| assignment SEMICOLON                  {     printf("\nSuccessful Assignment\n");    }
| expression SEMICOLON             
| assign_array SEMICOLON
| NEWLINE                               {     printf("\n");                            }
      
//| function_call SEMICOLON               {     printf("\nFunction called successfully\n");  }                       
| special ;

declaration: 
INT writeINT 			              {     printf("\nSuccessfully Declared Integer.\n");       }
|DECI writeReal					        {     printf("\nSuccessfully Declared Real Number.\n");   }
|array_int                      {     printf("\nSuccessfully Declared Integer Array.\n"); }
|array_real                     {     printf("\nSuccessfully Declared Real Array.\n");    }
|STR writeString                   {     printf("\nSuccessfully Declared Text.\n");          }
;


// Declaring all possible integer variable assignment and declaration
writeINT: writeINT COMMA VAR {
int varID = check_the_variable($3); 
//$3 means VAR
if(varID!=-1)
{
    printf("\n%s is declared before.\n", $3);
}
else{
    strcpy(variable[tmp],$3);
    DeclaredBefore[tmp]=1;
    tmp++;
}
}
| writeINT COMMA VAR ASSIGN expression		{
//
	        int varID = check_the_variable($3);

	if(varID!=-1)
  {
          printf("\n%s is declared before.\n" , $3);
  }
  else{
          int x = (int)$5 ;
          strcpy( variable[tmp] , $3 ); // storing the variable name
          DeclaredBefore[tmp] = 1;    //storing that it's successfully assigned
          recordTheInteger[tmp] = x ; // storing the value
          tmp++;
    }

	}
| VAR {
        int varID = check_the_variable($1);
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",$1);
    }
    else
    {
        strcpy(variable[tmp],$1);
        DeclaredBefore[tmp]=1;
        tmp++;
    }
}
| VAR ASSIGN expression					{
        int varID = check_the_variable($1);
  if(varID!=-1)
  {
        printf("%s is declared before.\n", $1);
  }
  else{

        int x = (int)$3 ;
        strcpy( variable[tmp] , $1) ;
        DeclaredBefore[tmp] = 1; // 1 for the integer
        recordTheInteger[tmp] = x ;
        tmp++;

   }

	}
;
//Declaring all possible double variable assignment and declaration
writeReal: writeReal COMMA VAR {
    int varID = check_the_variable($3);
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",$3);
    }
    else
    {
        strcpy(variable[tmp],$3);
        DeclaredBefore[tmp]=2; // 2 for the double
        tmp++;
    }
}
| writeReal COMMA VAR ASSIGN expression   {

        int varID = check_the_variable($3);
  if(varID!=-1)
  {
   printf("\n%s is declared before.\n" , $3);
  }
  else{
        double x = $5 ; // storing the variable
        strcpy( variable[tmp] , $3 );
        DeclaredBefore[tmp] = 2;
        recordTheDecimal[tmp] = x ;
        tmp++;
  }
}
| VAR ASSIGN expression         {

        int varID = check_the_variable($1);
  if(varID!=-1)
  {
        printf("%s is declared before.\n", $1);
  }   
  else{

        double x = $3 ;
        strcpy( variable[tmp] , $1) ;
        DeclaredBefore[tmp] = 2;
        recordTheDecimal[tmp] = x ;
        tmp++;
      }

  }  
| VAR {
    int varID = check_the_variable($1);
    if(varID!=-1)
    {
        printf("%s is declared before.\n",$1);
    }
    else
    {
        strcpy(variable[tmp],$1);
        DeclaredBefore[tmp]=2;
        tmp++;
    }
}
;
//Declaring all possible character variable assignment and declaration
writeString: writeString COMMA VAR {
    int varID = check_the_variable($3);
 if(varID!=-1)
    {
        printf("\n%s is declared before.",$3);
    }
    else
    {
        strcpy(variable[tmp],$3);
        DeclaredBefore[tmp]=3; // 3 for the char
        tmp++;
    }
}
| writeString COMMA VAR ASSIGN STRING    {

        int varID = check_the_variable($3);
  if(varID!=-1)
  {
         printf("\n%s is declared before.\n" , $3);
  }
  else{

        strcpy( variable[tmp] , $3 );
        DeclaredBefore[tmp] = 3;

        recordString[tmp] = (char *) malloc (sizeof(char)*(strlen($5) + 1) );
      
        strcpy(recordString[tmp] , $5);
        tmp++;

   }

  }
| VAR ASSIGN STRING         {

        int varID = check_the_variable($1);
  if(varID!=-1)
  {
        printf("\n%s is already declared!\n", $1);
  }
  else{
        strcpy( variable[tmp] , $1) ;
        DeclaredBefore[tmp] = 3;
        recordString[tmp] = (char*) malloc (sizeof(char)*(strlen($3) ) );
        strcpy(recordString[tmp] , $3);
        tmp++;

   }}

| VAR {
        int varID = check_the_variable($1);
    if(varID!=-1)
    {
        printf("\n%s is declared before.\n",$1);
    }
    else
    {
        strcpy(variable[tmp],$1);
        DeclaredBefore[tmp]=3;
        tmp++;
    }
}
;
//INT TYPE ARRAY
array_int : INT ARR VAR LTB INTNUMBER RTB   {
  
  int varID = check_the_variable($3);
  
  if(varID!=-1)
  {
      printf("\n%s is declared before.\n" , $3);
  }
  else{

      strcpy( variable[tmp] , $3) ;
      DeclaredBefore[tmp]=10; // 10 for the int type array
      recordTheInteger[tmp]= intArrSize;
      intArrSize+=$5;
      tmp++;
   }
}
;
//DOUBLE TYPE ARRAY
array_real : DECI ARR VAR LTB INTNUMBER RTB       {
  int varID = check_the_variable($3);
  if(varID!=-1)
  {
      printf("\n%s is declared before.\n" , $3);
  }
  else{

    strcpy( variable[tmp] , $3) ;
    DeclaredBefore[tmp]=11; //11 for the double type array
    recordTheInteger[tmp]= doubleArrSize;
    doubleArrSize+=$5;
    tmp++;
   }
}

;
//ASSIGN VALUES
assignment: assignment COMMA assigTheVal
| assigTheVal
assigTheVal: VAR ASSIGN STRING {
  int varID = check_the_variable($1);
  if(varID==-1){
    printf("\nVariable %s has not been Declared Yet\n", $1);
  }
  else {
    recordString[varID] = (char*)malloc(sizeof(char)*(strlen($3)));
    strcpy(recordString[varID] , $3);
    }
}
| assign_array
| VAR ASSIGN expression {
  
  int varID = check_the_variable($1);

  if(varID==-1){
    printf("\nVariable %s not declared.\n", $1);
  }
  else {
    if(DeclaredBefore[varID]==1){
       int x = (int)$3; //type casting
      recordTheInteger[varID]=x;
  
    }
    else if(DeclaredBefore[varID]==2){
       double x = $3 ;
      recordTheDecimal[varID]=x;
      
    }
    
  }
}

;
assign_array: VAR LTB INTNUMBER RTB ASSIGN expression {
    int varID = check_the_variable($1);
    if(varID==-1)
    {
        printf("\nVariable %s not declared\n",$1);
    }
    else{
        if(DeclaredBefore[varID]==10) // int array
        {
            int x = recordTheInteger[varID];
            x+= $3;
            int y= (int) $6;
            arr_int[x]=y;
        }
        else if(DeclaredBefore[varID]==11) // double array
        {
            int x= recordTheInteger[varID];
            x+= $3;
            double y =$6;
            arr_real[x]=y;
        }
        else{
            printf("\nNot array\n");
        }
    }
}
;
//CONDITIONAL STATEMENT
conditionalStmt: if_stmt
;
if_stmt: IF LTB expression RTB LB statements RB {
  if( (int)$3 ){
    printf("\nInside If Block\n");
  }
}
| if_stmt ELSE LB statements RB {
     printf("\nInside if else Block\n");
}
| if_stmt elif_stmts
| if_stmt elif_stmts ELSE LB statements RB

;
//nested
elif_stmts: elif_stmt
| elif_stmt elif_stmts

;
elif_stmt: ELIF LTB expression RTB LB statements RB {
  printf("\nInside elseif Block\n"); 
}



//LOOPS
loop_stmts: forLoop
| whileLoop
| dowhileLoop
;

whileLoop: WHILE LTB expression RTB LB statements RB {
  if($3)
  {
    printf("while loop will be executed\n");
  }
  else {
    printf("while loop wont be executed\n");
  }

}

;
forLoop: FROM LTB assignment DIVIDER expression DIVIDER expression RTB LB statements RB {
  int count = 0;
  printf("\ninside for loop\n");
}
| FROM LTB RANGE INTNUMBER DIVIDER INTNUMBER RTB LB statements RB{
  printf("\nFor loop with range\n");
  int lower=(int)$4;
  int upper=(int)$6;
  int index,count=0;
  for(index=lower;index<=upper;index++)
  {
    count++;
    printf("\nIteration Number %d \n",count);
  }
  printf("\nrange for loop ran %d times \n",count);
}
;

;
dowhileLoop: DO LB statements RB WHILE LTB expression RTB
{
  if($7)
  {
    printf("\nDo while loop\n");
  }
  else {
    printf("\nDo while loop\n");
  }
}
;
// SWITCH
switchStmt: SWITCH INTNUMBER COLON LB caseStmt RB {
   maincase =(int)$2; //type casting
   printf("\nInside switch statement (integer)\n")
}
| SWITCH STRING COLON LB caseStmt RB {
   recordString[450]=(char*)malloc(sizeof(char)*(strlen($2)));
   strcpy(recordString[450] , $2);
   printf ("Inside switch statement string");

}
| SWITCH REALNUMBER COLON LB caseStmt RB {
   dmaincase=$2;
   printf ("\nInside switch statement (double)\n");

}

;
caseStmt: case_stmt
| case_stmt defaultStmt
| case_stmt caseStmt
;
case_stmt: CASE INTNUMBER COLON LB statements RB{
 subcase =(int)$2;
 int vall = maincase-subcase;
 if(vall==0)
 {
   printf("\n%d integer matched\n",$2);
 }
  
}
|CASE REALNUMBER COLON LB statements RB{
 dsubcase = $2;
 if(dmaincase==dsubcase)
 {
  printf("\n%lf double matched\n",$2);
 }
  
}
|CASE STRING COLON LB statements RB{
 
  printf("\nstring matched\n");

}
;
defaultStmt: DEFAULT COLON LB statements RB{
  printf("\ndefault case\n");
}
;


//SPECIAL
special: conditionalStmt
| switchStmt
| loop_stmts
| PRINT LP all RP SEMICOLON {
    
}
| SCAN LP VAR RP SEMICOLON {
    int varID = check_the_variable($3);
    if(DeclaredBefore[varID]==-1)
    {
        printf("variable not declared yet\n");
    }
    else if(DeclaredBefore[varID]==1)
    {
        int value;
        scanf("%d", &value);
        recordTheInteger[varID]=value;
         printf("Integer Variable, %s = %d\n", $3, recordTheInteger[varID]);
    }
    else if(DeclaredBefore[varID] == 2)  { 
         double value;
        scanf("%lf", &value);
        recordTheDecimal[varID]=value;
         printf("Integer Variable, %s = %lf\n", $3, recordTheDecimal[varID]);

}
    else if(DeclaredBefore[varID] == 3)  { 
      char str[100];
      scanf("%c",str);
      int length = strlen(str);
      char* strr = malloc( length + 1 );
    strcpy(recordString[varID],strr);

    printf("Text Variable, %s = %s\n", $3,str);
    
}
}
;
all: printtype
| all DIVIDER printtype
;
printtype:
expression {
    printf("%lf",$1);
}  
| STRING {
    int length = strlen($1);
    char* str = malloc(length+1);
    strcpy(str,$1);
    printf("%s \n",str);
    free(str);
}
| VAR 
{
    int varID = check_the_variable($1);
    if(DeclaredBefore[varID]==-1)
    {
        printf("variable not declared yet");
    }
    else if(DeclaredBefore[varID]==1)
    {
        int value = recordTheInteger[varID];
        int valll = (int)value;
         printf("Integer Variable, %s = %d", $1, valll);
    }
    else if(DeclaredBefore[varID] == 2)  { 

    printf("Real Variable, %s = %lf",$1, recordTheDecimal[varID]);
}
    else if(DeclaredBefore[varID] == 3)  { 

    int length = strlen(recordString[varID]);
    char* str = malloc( length + 1 );
    strcpy(str, recordString[varID]);

    printf("Text Variable, %s = %s\n", $1,str);
    free(str);
}

}

;

// Expressions

expression: INTNUMBER             { $$ = (int)$1; }
| REALNUMBER                      { $$ = $1*1.0; }
| VAR                             { 

  int varID = check_the_variable($1);
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");
  }

  else if(DeclaredBefore[varID] == 1)  { $$ = recordTheInteger[varID]*1.00; }
  else if(DeclaredBefore[varID] == 2)  { $$ = recordTheDecimal[varID]*1.00 ; }


 }
| VAR LTB INTNUMBER RTB   {

  int varID = check_the_variable($1);
  
  if(varID==-1)
  {
   printf("\n%s is not declared.\n" , $1);
  }
  else{
  if(DeclaredBefore[varID]==10){
      int x = recordTheInteger[varID];
      x+=$3;
      $$ = arr_int[x]*1.0 ;
    }
  else if(DeclaredBefore[varID]==11){
      int x = recordTheInteger[varID];
      x+=$3;
      $$ = arr_real[x];
    }
  else {
      printf("\nNot Array\n");
    }
  }
}
| VAR LTB VAR RTB   {

  int varID = check_the_variable($1);
  
  if(varID==-1)
  {
   printf("%s is not declared yet!\n" , $1);
  }
  else{
  if(DeclaredBefore[varID]==10){
      int x = recordTheInteger[varID];
      int idx1 = check_the_variable($3);
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , $3);
      }
      else {
        if(DeclaredBefore[idx1]==1){
          x+=recordTheInteger[idx1];
        }
      }
      $$ = arr_int[x]*1.0 ;
    }
  else if(DeclaredBefore[varID]==11){
      int x = recordTheInteger[varID];
      int idx1 = check_the_variable($3);
      if(idx1==-1)
      {
        printf("\n%s is not declared yet!\n" , $3);
      }
      else {
        if(DeclaredBefore[idx1]==1){
          x+=recordTheInteger[idx1];
        }
      }
      $$ = arr_real[x]*1.0 ;
    }
  else {
      printf("Not Array\n");
    }
  }
}

| ABSOLUTE expression            { $$ = fabs($2)*1.0 ; }
| FACTORIAL expression           {
  int x = (int)$2 ;
  if(!x){ $$ = 1.0 ; }
  else if(x<0){ printf("\nInvalid Factorial\n"); $$ = 0.0 ; }
  else{
  long long int factor = 1;
  for(i=2; i<=x; i++)
  {
    factor*=i;
  }
  $$ = factor;
  printf("\nFactorial is %d",$$);
  $$ = factor*1.0;
  }
 }
| expression PLUS expression        { $$ = $1 + $3; }
| expression MINUS expression       { $$ = $1 - $3; }
| expression MUL expression         { $$ = $1 * $3; }
| expression DIV expression         {
  if($3)
    {
     $$ = ($1 / $3)*1.0 ;
    }
  else
    {
     $$ = 0;
     printf("\n Division by 0 is not Allowed.\n");
    }
 }
| expression MOD expression         { $$ = ((int)$1 % (int)$3)*1.0 ; }
| expression POWER expression         { $$ = pow( (int)$1 , (int)$3 )*1.0 ; }

| INCRE VAR             {
  
  int varID = check_the_variable($2);
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(DeclaredBefore[varID] == 1) {

    recordTheInteger[varID] = recordTheInteger[varID] + 1 ;
    $$ = recordTheInteger[varID]*1.0;
     }
  else if(DeclaredBefore[varID] == 2) { 

    recordTheDecimal[varID] = recordTheDecimal[varID] + 1 ;
    $$ = recordTheDecimal[varID];
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| DECRE VAR             {

  int varID = check_the_variable($2);
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(DeclaredBefore[varID] == 1) {

    recordTheInteger[varID] = recordTheInteger[varID] - 1 ;
    $$ = recordTheInteger[varID]*1.0;
     }
  else if(DeclaredBefore[varID] == 2) { 

    recordTheDecimal[varID] = recordTheDecimal[varID] - 1 ;
    $$ = recordTheDecimal[varID];
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}

| VAR INCRE             {

  int varID = check_the_variable($1);
  
  if(DeclaredBefore[varID] == 0) 
  {
    printf("\nVaribale not Declared Before.\n");
  }
  else if(DeclaredBefore[varID] == 1) {

    $$ = recordTheInteger[varID]*1.0;
    recordTheInteger[varID] = recordTheInteger[varID] + 1 ;
     }
  else if(DeclaredBefore[varID] == 2) { 

    $$ = recordTheDecimal[varID];
    recordTheDecimal[varID] = recordTheDecimal[varID] + 1 ;
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| VAR DECRE             {

  int varID = check_the_variable($1);
  
  if(DeclaredBefore[varID] == 0) {printf("\nVaribale not Declared.\n");}
  else if(DeclaredBefore[varID] == 1) {

    $$ = recordTheInteger[varID]*1.0;
    recordTheInteger[varID] = recordTheInteger[varID] - 1 ;
     }
  else if(DeclaredBefore[varID] == 2) { 

    $$ = recordTheDecimal[varID];
    recordTheDecimal[varID] = recordTheDecimal[varID] - 1 ;
   }
  else if(DeclaredBefore[varID] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| NOT expression               {
    $$ = (!($2))*1.0 ;
}
| expression LESS expression   { 
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x < y)*1.0 ; 
}
| expression GREATER expression         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x > y)*1.0 ; 
}
| expression LESSEQUAL expression       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x <= y)*1.0 ; 
}
| expression GRTEQUAL expression       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x >= y)*1.0 ; 
}
| expression EQUAL expression         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x == y)*1.0 ; 
}
| expression NOTEQUAL expression       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x != y)*1.0 ; 
}
| expression OR expression          { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x || y)*1.0 ; 
}
| expression AND expression         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x && y)*1.0 ; 
}
| LP expression RP             { 
  $$ = $2; }

  |SIN LP expression RP {
        $$ = sin($3);
    }
    |COS LP expression RP {
        $$ = cos($3);
    }
    |TAN LP expression RP  {
        $$ = tan($3);
    }
    |LOG10 LP expression RP  {
        $$ = log10($3);
    }
    |LOG2 LP expression RP  {
        $$ = log2($3);
    }
    // function
    |FUNC VAR LTB INT VAR RTB 
    {
      printf("function declared");
    }
;






%%
int yywrap()
{
	return 1;
}

void yyerror(char *s)
{
	fprintf(stderr," error %s\n",s);
}

int main()
{
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
	yyparse();
  return 0;
}
