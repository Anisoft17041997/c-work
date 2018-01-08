#ifndef TYPE_POLY_H_INCLUDED
#define TYPE_POLY_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    false,
    true
} Bool;

/*--------------------------------------*/

typedef struct monome
{
    int coef;
    int degre;
    struct monome *next;
}monome, *polynome;

#endif // TYPE_POLY_H_INCLUDED
