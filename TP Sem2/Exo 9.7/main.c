#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100],B[50];
    int *PA,*PB;
    int N1,N2;
    printf("\nEntrer la dimension premier tableau: ");
    scanf("%d",&N1);
    for(PA=A;PA<A+N1;PA++){
        printf("Entrer l'element [%d]: ",PA-A+1);
        scanf("%d",PA);
    }
    printf("\nEntrer la dimension du deuxieme tableau: ");
    scanf("%d",&N2);
    for(PB=B;PB<B+N2;PB++){
        printf("Entrer l'element [%d]: ",PB-B+1);
        scanf("%d",PB);
    }

    for(PA=A+N1;PA<A+N1)
    return 0;
}
