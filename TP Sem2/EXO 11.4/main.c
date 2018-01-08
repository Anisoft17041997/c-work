#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *INF,*INFB;
    char NomINF[]="INFORM.TXT";
    char NomINFB[]="INFBIS.TXT";
    int NumAnc,NumNouv;
    char NomAnc[20],NomNouv[20];
    char PreAnc[30],PreNouv[30];
    int Trouve;
    int Matrouve;

    INF=fopen(NomINF,"r");
    if(!INF)
        printf("\a\nImpossible d'ouvrir le fichier %s\n",NomINF);
    INFB=fopen(NomINFB,"w");
    if(!INFB)
        printf("\a\nImpossible d'ouvrir le fichier %s\n",NomINFB);
    printf("\nSaisie de l'enregistrement a inserer.\n");
    printf("\nEntrer le numero matricule: ");
    scanf("%d",&NumNouv);
    printf("\nEntrer le nom: ");
    fflush(stdin);
    scanf("%[^\n]",NomNouv);
    printf("\nEntrer le prenom: ");
    fflush(stdin);
    scanf("%[^\n]",PreNouv);
    Trouve=0;
    /*Copie des enregistrements dont le nom precede lexcogr. a celui a inserer*/
    while(!feof(INF) && !Trouve)
    {
        fscanf(INF,"%d\t%s\t%s\n",&NumAnc,NomAnc,PreAnc);
        if(strcmp(NomAnc,NomNouv)!=0)
            Trouve=1;
        else
            fprintf(INFB,"%d\t%s\t%s\n",NumAnc,NomAnc,PreAnc);
    }
    /*Ecriture du nouvel enregistrement*/
    fprintf(INFB,"%d\t%s\t%s\n",NumNouv,NomNouv,PreNouv);

    return 0;
}
