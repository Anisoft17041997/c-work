#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int NbMyst,NbEntree,tps;
    srand(time(NULL));
    NbMyst = rand()%100+1;
    do
    {
        puts("Quel est le nombre?: ");
        scanf("%d",&NbEntree);
        if (NbEntree>NbMyst)
            puts("C'est moins!");
        if (NbEntree<NbMyst)
            puts("C'est plus!");
        if (NbEntree==NbMyst)
        {
            tps=clock();
            printf("Bravo vous avez trouve le nombre mystere en %.2f sec",(double)tps/CLOCKS_PER_SEC);
        }
    }while(NbEntree!=NbMyst);
    return 0;
}
