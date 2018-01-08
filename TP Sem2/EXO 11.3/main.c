#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *INFILE;
    FILE *OUTFILE;
    char NomINF[]="INFORM.TXT";
    char NomOUT[]="INFBIS.TXT";
    int NumMat1=0,NumMat2;
    char Nom1[20],Nom2[20];
    char Prenom1[30],Prenom2[30];
    INFILE=fopen(NomINF,"r");
    if(INFILE==NULL)
        printf("\nImpossible d'ouvrir le fichier %s",NomINF);
    OUTFILE=fopen(NomOUT,"w");
    if(OUTFILE==NULL)
        printf("\nImpossible d'ouvrir le fichier %s\n",NomOUT);
    printf("\nVoici les enregistrements du fichier %s\n",NomINF);
    system("TYPE INFORM.TXT");
    printf("\nEntrer les info de l'enregistrement a ajouter ");
    printf("\nEntrer le numero matricule: ");
    scanf("%d",&NumMat2);
    printf("\nEntrer le nom: ");
    fflush(stdin);
    scanf("%[^\n]",Nom2);
    printf("\nEntrer le prenom: ");
    fflush(stdin);
    scanf("%[^\n]",Prenom2);

    while(!feof(INFILE))
    {
        fscanf(INFILE,"%d\t%s\t%s\n",&NumMat1,Nom1,Prenom1);
        if (strcmp(Nom1,Nom2)==0 && strcmp(Prenom1,Prenom2)==0)
            printf("\n\aEnregistrement deja existant!");
        else
            fprintf(OUTFILE,"%d\t%s\t%s\n",NumMat1,Nom1,Prenom1);
    }
    fprintf(OUTFILE,"%d\t%s\t%s\n",NumMat2,Nom2,Prenom2);
    printf("\nVoici la nouvelle liste: \n");
    system("TYPE INFBIS.TXT");
    fclose(INFILE);
    fclose(OUTFILE);

    return 0;
}
