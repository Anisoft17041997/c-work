#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i=1,n,F=1;

    printf("Calcul du factoriel d'un entier\n");
    printf("Entrer un entier positif: ");
    scanf("%d",&n);
    if(n==0)
        F=1;
    else
    while(i<=n)
        {
       F*=i;
       i++;
        }
    printf("%d! = %d",n,F);
    return 0;
}
