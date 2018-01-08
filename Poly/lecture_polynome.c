#include "type_poly.h"
#include "poly.h"
#include "lecture_polynome.h"

polynome lecture_polynome(char *NomP)
{
    FILE *P_FIC;//pointeur sur FILE
    polynome P = new_poly();
    P_FIC = fopen(NomP,"r");
    while(!feof(P_FIC))
    {
        fscanf(P_FIC,"%dx^%d",&P->coef,&P->degre);
        P = P->next;
    }
    return P;
}
