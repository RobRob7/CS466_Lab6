/*   Abstract syntax tree code


 Header file   
 Shaun Cooper Spring 2023

 You must add appropriate header code that describes what this does

*/

#include<stdio.h>
#include<malloc.h>

#ifndef AST_H
#define AST_H
int mydebug;

/* define the enumerated types for the AST.  THis is used to tell us what 
sort of production rule we came across */

enum ASTtype {
   A_FUNCTIONDEC,
   A_VARDEC
	   //missing
};

// Math Operators

enum AST_OPERATORS {
   A_PLUS,
   A_MINUS,
   A_TIMES
	   //missing
};

enum AST_MY_DATA_TYPE {
   A_INTTYPE,
   A_VOIDTYPE

};

/* define a type AST node which will hold pointers to AST structs that will
   allow us to represent the parsed code 
*/

typedef struct ASTnodetype
{
     enum ASTtype type;
     enum AST_OPERATORS operator;
     char * name;
     int value;
     enum AST_MY_DATA_TYPE my_data_type;
     ///.. missing
     struct ASTnodetype *s1,*s2, *next ; /* used for holding IF and WHILE components -- not very descriptive */
} ASTnode;


/* uses malloc to create an ASTnode and passes back the heap address of the newley created node */
ASTnode *ASTCreateNode(enum ASTtype mytype);

void PT(int howmany);


/*  Print out the abstract syntax tree */
void ASTprint(int level,ASTnode *p);

#endif // of AST_H
