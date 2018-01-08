#ifndef TYPE_POLY_H_INCLUDED
#define TYPE_POLY_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct monome monome;
typedef struct polynome polynome;

struct monome
{
    int coef;
    int degre;
    monome *next;
};

struct polynome
{
    monome *debut;
    monome *fin;
    int taille;
};

#endif // TYPE_POLY_H_INCLUDED
