#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[50];
    int *P1,*P2;
    int N,X;
    printf("\nEntrer le nombre d'elements: ");
    scanf("%d",&N);
    for(P1=A; P1<A+N; P1++)
    {
        printf("\nEntrer le %d%s element: ",P1-A+1,((P1-A+1)==1)?"er":"eme");
        scanf("%d",P1);
    }
    printf("\nEntrer un element a chercher: ");
    scanf("%d",&X);
    for(P1=P2=A;P1<A+N;P1++)
    {
        *P2=*P1;
        if(*P2!=X)
            P2++;
    }
    N=P2-A;
    printf("\nVoici le nouveau tableau:\n ");
    for(P1=A; P1<A+N; P1++)
    {
        printf("%d",*P1);
        printf("\t");
    }
    return 0;
}
