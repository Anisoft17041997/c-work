#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n;
    printf("Entrer un entier positif: ");
    scanf("%d",&n);
    srand(time(NULL));
    printf("Voici la liste des nombres aleatoires inferieurs ou egals a %d\n",n);
    for (i=0;i<n;i++)
        printf("%5d",1+rand()%n);
    return 0;
}
