#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Déclaraations*/
    int A[50][50];  //Matrice de données A
    int B[50][50]; //Matrice de données B
    int C[50][50];//Matrice produit
    int N,M,P;   //Nbre de lignes et nbre de colonnes
    int I,J,K;  //Indices courants

    printf("Calcule du produit de deux matrices\n");
    printf("\n********** Matrice A **********");
    printf("\nEntrer le nombre de lignes de A: \n");
    scanf("%i",&N);
    printf("Entrer le nombre de colonnes de A: \n");
    scanf("%i",&M);
    for (I=0;I<N;I++)
        for (J=0;J<M;J++)
        {
        printf("Entrer l'element [%i][%i]: ",I,J);
    scanf("%i",&A[I][J]);
        }
    printf("******** Matrice B *********\n");
    printf("Nombre de lignes de B: %i\n",M);
    printf("Entrer le nombre de colonnes de B: ");
    scanf("%i",&P);
    for (I=0;I<M;I++)
        for (J=0;J<P;J++)
        {
        printf("Entrer l'element [%i][%i]: ",I,J);
    scanf("%i",&B[I][J]);
        }
    printf("Affichage des matrices\n");
    printf("Matrice de donnees A\n");
    for (I=0;I<N;I++)
        {
        for (J=0;J<M;J++)
            printf("%i\t",A[I][J]);
            printf("\n");
        }
    printf("Matrice de donnees B\n");
    for (I=0;I<N;I++)
       {
        for (J=0;J<M;J++)
            printf("%i\t",B[I][J]);
            printf("\n");
       }
    for (I=0;I<N;I++)
    {
        for (K=0;K<M;K++)
            C[I][J]+=(A[I][K])*(B[K][J]);
    }
    printf("Matrice resultat C:\n");
    for (I=0;I<N;I++)
    {
        for (J=0;J<P;J++)
            printf("%i\t",C[I][J]);
        printf("\n");
    }

    return 0;
}
