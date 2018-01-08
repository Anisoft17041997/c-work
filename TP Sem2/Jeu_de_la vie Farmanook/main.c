#include <stdio.h>
#include <stdlib.h>
#define TSOUSM 7
#define TSURM 9

void init(int M[][TSURM]);
void LIGNE(int L)
int nb_voisins(int M[][TSURM], int L,int C);
void maj(int M[][TSURM]);
void aff(int M[][TSURM]);

int main() {
    int i;
    int nb_cycl;
    int M[TSURM][TSURM];
    char S[2];
    printf("\nEntrer le nombre de cycle: ");
    scanf("%d",&nb_cycl);
    init(M);
    printf("\nLa population au depart: ");
    aff(M);
    printf("\nPresser sur la touche entree pour continuer..... ");
    gets(S);
    return 0;
}
void init(int M[][TSURM])
{
    int i,j;
    for(i=0; i<TSURM; i++)
    {
        for(j=0; j<TSURM; j++)
        {
            if(i<=j && i>0 && j<=7)
            {
                M[i][j]=1;
            }
            else
                M[i][j]=0;

        }
    }
}
void LIGNE(int L)
{
    int i;
    for (i=0;i<L;i++){
        printf("+-");
    }
    printf("+\n");
}
void aff(int M[][TSURM])
{
    int i,j;
    for (i=0;i<TSOUSM,i++){
        LIGNE(7);
        for (j=0;j<TSOUSM;j++){
            if(M[i][j]==1){
                printf("|%c",'*');
            }
            else
                printf("|%c",'|');
        }
        printf("|\n");
    }
    LIGNE(TSOUSM);
}
