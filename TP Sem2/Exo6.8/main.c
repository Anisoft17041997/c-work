#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    int VALD=1;
    int i=0;
    int NB;
    do
    {
        printf("\nEntrer le %d%s chiffre: ",(i+1),(i==0)?"er":"eme");
        scanf("%d",&X);
        if(X<0 || X >9)
            printf("\a");
        else if(X)
        {
            i++;
            NB+=VALD*X;
            VALD*=10;
        }
        else
            printf("La valeur du nombre renvers%c est: %d",130,NB);
    }while(X);
    return 0;
}
