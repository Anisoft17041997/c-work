#include <stdio.h>
#include <stdlib.h>

int somchif(int n)
{
    int somme=0;
    while(n>0)
    {
        somme+=n%10;
        n/=10;
    }
    return somme;
}
int envers(int n)
{
    int k=0;
    while(n>0)
    {
        k=k*10+n%10;
        n/=10;
    }
    return k;
}
int main()
{
    system("color 37");
    int nb;
    printf("\nEtrer un nombre positif: ");
    scanf("%d",&nb);

    printf("\nLa somme des chiffres de %d est: %d\n",nb,somchif(nb));
    printf("\nL'envers du nombre %d est: %d\n",nb,envers(nb));
    return 0;
}
