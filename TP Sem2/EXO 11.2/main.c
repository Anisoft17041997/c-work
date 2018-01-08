#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *F_BIS;
    FILE *F_INF;
    char NomF_BIS[]="INFBIS.TXT";
    char NomF_INF[]="INFORM.TXT";
    int Num1=0;
    char Nom[20];
    char Pren[30];
    F_INF=fopen(NomF_INF,"r");
    if (F_INF==NULL)
        printf("Impossible d'ouvrir le fichier %s",NomF_INF);
    F_BIS=fopen(NomF_BIS,"w");
    while(!feof(F_INF))
    {
        fscanf(F_INF,"%d\t%s\t%s\n",&Num1,Nom,Pren);
        fprintf(F_BIS,"%d\t%s\t%s\n",Num1,Nom,Pren);
    }
    fclose(F_INF);
    fclose(F_BIS);
    return 0;
}
