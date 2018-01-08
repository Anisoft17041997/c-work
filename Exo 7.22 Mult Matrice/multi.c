#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main()
{
    /* Déclarations */
    int A[50][50]; /* matrice donnée   */
    int B[50][50]; /* matrice donnée   */
    int C[50][50]; /* matrice résultat */
    int N, M, P;   /* dimensions des matrices */
    int I, J, K;   /* indices courants */

    printf("\nMultiplication of Matrix");
    /* Saisie des donnees */
    printf("*** Matrice A ***\n");
    N = saisieInt("\nNombre de lignes de   A (max.50) : ");
    M = saisieInt("\nNombre de colonnes de A (max.50) : ");

    //Saisie des elements de A
    saisieMatrice(&A[0][0], N, M);

    printf("*** Matrice B ***\n");
    printf("\nNombre de lignes de B (max.50) = %d",M);
    P = saisieInt("\nNombre de colonnes de B (max.50) : ");

    for (I=0; I<M; I++)
        for (J=0; J<P; J++)
        {
            printf("Elément[%d][%d] : ",I,J);
            scanf("%d", &B[I][J]);
        }
    /* Affichage des matrices */
    printf("Matrice donnée A :\n");
    for (I=0; I<N; I++)
    {
        for (J=0; J<M; J++)
            printf("%7d", A[I][J]);
        printf("\n");
    }
    printf("Matrice donnée B :\n");
    for (I=0; I<M; I++)
    {
        for (J=0; J<P; J++)
            printf("%7d", B[I][J]);
        printf("\n");
    }
    /* Affectation du résultat de la multiplication à C */
    for (I=0; I<N; I++)
    {
        for (J=0; J<P; J++)
        {
            C[I][J]=0;
            for (K=0; K<M; K++)
                C[I][J] += A[I][K]*B[K][J];
        }
    }
    /* Edition du résultat */
    printf("Matrice résultat C :\n");
    //showMatrix(M,N,P);
    return 0;
}
