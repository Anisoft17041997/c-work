/*
    Name:   main.c
    Goal:
    Author: Gauthier
    Date: 10/12/2016
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;//nb lignes de la 1ere matrice
    int M;//nb colonnes de la 1ere matrice et nb lignes de la 2eme
    int P;//nb colonnes de la 2eme matrice
    int i;
    int j;
    int k;
    //int s;
    int *A;
    int *B;
    int *C;

    printf("Entrer le nombre de lignes de A: ");
    scanf("%d",&N);
    printf("Entrer le nombre de colonnes de A: ");
    scanf("%d",&M);
    printf("Entrer le nombre de colonnes de B: ");
    scanf("%d",&P);
    A = (malloc(sizeof(int)*N*M));
    B = (malloc(sizeof(int)*M*P));
    C = (malloc(sizeof(int)*N*P));

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("A[%d,%d]: ",i+1,j+1);
            scanf("%d",(A+i+j));
        }
    }

    for(i=0; i<M; i++)
    {
        for(j=0; j<P; j++)
        {
            printf("B[%d,%d]: ",i+1,j+1);
            scanf("%d",(B+i+j));
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<P; j++)
        {
//            s = 0;
            for(k=0; k<M; k++)
            {
//                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<P; j++)
        {
//            printf("%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
