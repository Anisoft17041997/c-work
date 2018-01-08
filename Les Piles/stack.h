#include <stdio.h>
#include <stdlib.h>

/*Definition du type booleen*/
typedef enum
{
    false,
    true
} Bool;

/*Definition d'une structure de pile*/
typedef struct StackElement
{
    int value;
    struct StackElement *next;
} StackElement, *Stack;

/*Prototypes de fonctions*/
void print_stack(Stack st);//Affichage des elements de la pile
Stack new_stack(void);
Bool is_empty_stack(Stack st);
Stack push_stack(Stack st, int x);//Empiler un entier dans la pile
Stack pop_stack(Stack st);//Depiler un entier dans la pile
int top_stack(Stack st);//Premier element de la pile
int stack_length(Stack st);//Longueur de la pile
