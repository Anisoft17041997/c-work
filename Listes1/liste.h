#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


typedef enum
{
    false,
    true
} Bool;

/*--------------------------------------*/

typedef struct ListElement
{
    int value;
    struct ListElement *next;
} ListElement, *List;

/*--------------------------------------*/

/*Prototypes de fonctions*/
List new_list();
Bool is_empty_list(List li);
void print_list(List li);
List push_front_list(List li, int x);
List push_back_list(List li, int x);
List push_list(List li, int x);
List pop_front_list(List li);
List pop_back_list(List li);
List pop_list(List li, int x);
int list_front(List li);
int list_length(List li);
#endif // LISTE_H_INCLUDED
