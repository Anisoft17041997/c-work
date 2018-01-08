#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[50];
    int *P1,*P2,AIDE;
    int N;
    printf("Entrer la dimension du tableau(max 50): ");
    scanf("%d",&N);
    /*Saisie des données*/
    for (P1=A;P1<A+N;P1++){
        printf("Entrer l'element %d: ",P1-A);
        scanf("%d",P1);
    }
    /*Affichage des données*/
    for (P1=A;P1<A+N;P1++){
        printf("%d\t",*P1);
    }
    printf("\n");
    /*Inversement des ddonées du tableau*/
    for (P1=A,P2=A+(N-1);P1<P2;P1++,P2--){
        AIDE=*P1;
        *P1=*P2;
        *P2=AIDE;
    }
    /*Affichage du résultat final*/
    for (P1=A;P1<A+N;P1++)
        printf("%d\t",*P1);
    printf("\n");
    return 0;
}
