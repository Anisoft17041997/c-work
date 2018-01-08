#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,CX;
    int i=0;
    int Som=0;
    int Produit=1;
    do
    {
        do
        {
        printf("\nEntrer le %d%s chiffre: ",(i+1),(i==0)?"er":"eme");
        CX=scanf("%d",&X);
        fflush(stdin);
        if(CX==0 || X<0 || X>9)
            printf("\a");

        else if(X)
        {
            i++;
            Som+=X;
            Produit*=X;

        }
        else if(!X && i>0)
        {
            printf("\nLa somme des chiffres = %d \n",Som);
            printf("\nLe produit des chiffres = %d \n",Produit);
            printf("\nLa moyenne des chiffres = %f",(float)Som/i);
        }
        }while(CX==0 || X<0 || X>9);
    }while(X);


    return 0;
}
