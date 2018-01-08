#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[50];
    int n,i,j,AIDE;

    printf("Donner la taille du vecteur: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Donner l'element [%d]: ",i+1);
        scanf("%d",&T[i]);
    }
    printf("Le tableau donne:\n");
    for (i=0;i<n;i++)
    {
        printf("%d",T[i]);
        printf("\t");
    }
    printf("\n");
    for (i=0,j=n-1;i<j;i++,j--)
    {
        AIDE=T[i];
        T[i]=T[j];
        T[j]=AIDE;
    }
    printf("Tableau a elements inverse: \n");
    for (i=0;i<n;i++)
    {
        printf("%d",T[i]);
        printf("\t");
    }


    return 0;
}
