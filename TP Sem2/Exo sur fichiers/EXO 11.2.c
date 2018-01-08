#include <stdio.h>
#include <stdlib.h>
#define Nmax 100
int main()
{
    struct Info
    {
        int NumMat;
        char nom[20];
        char Prenom[20];
    };
    struct Info Enrg[Nmax];
    int n;
    int i=0;
    FILE *INFBIS;
    char NomInfbis[20];
    FILE *INFICHIER;
    INFICHIER=fopen("INFORM.TXT","r");
    while(!feof(INFICHIER))
    {
        i++;
    }
    printf("%d",i);
}
