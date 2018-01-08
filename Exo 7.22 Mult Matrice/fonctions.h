#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
int saisieInt(char *msg);
/*void saisieMatrice(int M[][50],int  L, int C);*/
void saisieMatrice(int *M,int  L, int C);
void showMatrix(int M[][50], int L, int C);
#endif // FONCTIONS_H_INCLUDED
