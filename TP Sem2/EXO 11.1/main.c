#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumMat;
    int Nb,i=0;
    char Nom[20];
    char Pren[30];
    FILE *FICHIER;
    char NomF[]="INFORM.TXT";
    printf("\nEntrer le nombre d'enregistrements: ");
    scanf("%d",&Nb);
    FICHIER=fopen(NomF,"w");
    while(!feof(FICHIER) && i<Nb)
    {
        printf("\nEntrer le matricule numero %d: ",i+1);
        scanf("%d",&NumMat);
        printf("\nNom: ");
        fflush(stdin);
        scanf("%[^\n]",Nom);
        printf("\nPrenom: ");
        fflush(stdin);
        scanf("%[^\n]",Pren);
        fprintf(FICHIER,"%d\t%s\t%s\n",NumMat,Nom,Pren);
        i++;
    }
    fclose(FICHIER);
    printf("\n");
    printf("\nNum\tNom\tPrenom\n\n");
    system("type INFORM.TXT");
    return 0;
}
