#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int i;
    FILE *INFICHIER;
    char NomFichier[]="INFORM.TXT";
    printf("\nEntrer le nombre d'enregistrements: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
            printf("\nEnregistrement numero %d\n",i+1);
            printf("\nEntrer le numero matricule: ");
            fflush(stdin);
            scanf("%d",&Enrg[i].NumMat);
            printf("\nEntrer le nom: ");
            fflush(stdin);
            gets(Enrg[i].nom);
            printf("\nEntrer le prenom: ");
            fflush(stdin);
            gets(Enrg[i].Prenom);
    }
    INFICHIER=fopen(NomFichier,"w");
    for(i=0; i<n; i++)
    {
        fprintf(INFICHIER,"%d\t%s\t%s\t\n",Enrg[i].NumMat,Enrg[i].nom,Enrg[i].Prenom);
    }
    fclose(INFICHIER);
    printf("\nVoici les enregistrements \n");
    system("TYPE INFORM.TXT");
    return 0;
}
