/*
    Name:   fonction.c
    Goal:   Liste des fonctions necessaires pour les matrice;
    Author: Gauthier
    Date: 10/12/2016
*/
#include "fonctions.h"

int saisieInt(char *msg)
{
    int N;
    printf("%s",msg);
    scanf("%d", &N);
    return N;
}
/*
void saisieMatrice(int M[][50],int  L, int C){
    int i,j;
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            printf("Element [%d][%d]: ",i+1,j+1);

            scanf("%d",&M[i][j]);
        }
    }
}
*/
void saisieMatrice(int *M,int  L, int C)
{
    int i,j;
    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
        {
            printf("Element [%d][%d]: ",i+1,j+1);
            scanf("%d",(M+i*(50)+j));
        }
    }
}

void showMatrix(int M[][50], int L, int C)
{
    int I,J;
    for (I=0; I<L; I++)
    {
        for (J=0; J<C; J++)
            printf("%7d", M[I][J]);
        printf("\n");
    }
}
