%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "project.tab.h" 
#define yywrap() 1
// return 1 if there  is no input anymore

%}


%%
"begin"	    		{		return BEG;			}
"end"				{		return END;			}
"int"	    		{		return INT;			}
"deci"				{		return DECI;		}
"str"		        {		return STR;			}
"array"		        {		return ARR;			}
"plus"		        {		return PLUS;		}
"minus"		        {		return MINUS;		}
"into" 	            {		return MUL;			}
"div"		        {		return DIV;			}
"power"	            {		return POWER;		}
"mod"		        {		return MOD;			}	
"incre"		        {		return INCRE;		}
"decre"		        {		return DECRE;		}
"eqe"		        {		return EQUAL;		}
"grt"		        {		return GREATER;		}
"less"		        {		return LESS;		}
"ge"	            {		return GRTEQUAL;	}
"le"	            {		return LESSEQUAL;	}
"ne"	            {		return NOTEQUAL;	}
"abs"		        {		return ABSOLUTE;	}
"fact"	            {		return FACTORIAL;	}
"if"                {		return IF;			}
"else"              {		return ELSE;		}
"elif"              {		return ELIF;		}
[(]			        {		return LP;			}
[)]			        {		return RP;			}
"{"                 {		return LB;			}
"}"                 {		return RB;			}
"or"		        {		return OR;			}
"and"		        {		return AND;			}
"not"		        {		return NOT;			}
"["                 {		return LTB;			}
"]"                 {		return RTB;			}
"="                 {		return ASSIGN;		}
"--"                {		return DIVIDER;		}
"choose"            {		return SWITCH;		}
"match"             {		return CASE;		}
"default"           {		return DEFAULT;		}
"loop1"		        {		return FROM;		}
"loop2"             {		return WHILE;		}
"repeat"            {		return DO;			}
"range"             {		return RANGE;		}
"show"              {		return PRINT;		}
"scan"              {		return SCAN;		}
":"                 {		return COLON;		}
"NL"		        {		return NEWLINE;		}
[;]	 				{	    return SEMICOLON;	}
","	 				{		return COMMA;       }
"sin"               {       return SIN;         }
"cos"               {       return COS;         }
"tan"               {       return TAN;         }
"log10"             {       return LOG10;       }
"log2"              {       return LOG2;        }
"func"              {       return FUNC;        }

[ \n\t]*	        ;



"#"[ ]* {
    char comment[1000];
    int i = 0;
    while(1) {
        char c = input();
        if(c == '\n' || c == EOF) {
            comment[i] = '\0';
            break;
        }
        comment[i++] = c;
    }
    printf("\nSingle Line Comment! The Comment is: \n");
    printf("%s\n", comment);
    return singlecmnt;
}

"/*"[ ] {
    char comment[1000];
    int i = 0;
    while(1) {
        char c = input();
        if(c == '*') {
            char d = input();
            if(d == '/') {
                comment[i++] = '\0';
                break;
            }
            comment[i++] = (c == '\n') ? ' ' : c;
            comment[i++] = (d == '\n') ? ' ' : c;
        } else {
            if(comment[i - 1] == '*' && c == '/') {
                comment[i - 1] = '\0';
                break;
            }
            comment[i++] = (c == '\n') ? ' ' : c;
        }
    }
    printf("\nMultiline Comment! The Comment is: \n");
    printf("%s\n", comment);
    return multicmnt;
}

[A-Z|a-z]+[a-zA-Z0-9_]*	{ 

	yylval.text = strdup(yytext);
 	return VAR;
}  


[+|-]?[0-9]+ {
	yylval.integer = atoi(yytext); 	
	return INTNUMBER;
}

[+|-]?[0-9]+[.][0-9]+		{
    yylval.real = atof(yytext);
	return REALNUMBER;
}	

\'[^'\\\*"]*\' 	{ 
    yytext[strlen(yytext)-1] = '\0';
	yylval.text = strdup(yytext+1);
	return STRING ; 
}	
	
%%

