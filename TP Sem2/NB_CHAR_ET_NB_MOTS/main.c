#include <stdio.h>
#include <stdlib.h>

int main()
{
    int compte_m(char *NF);
    FILE *F;
    char NF[30];
    printf("Entrer le nom du fichier: ");
    gets(NF);
    F=fopen(NF,"r");
    if(NF==NULL)
        printf("\aFichier introuvable!");

    printf("%d",compte_m("Gauthier le boss!"));
    return 0;
}
int compte_c(char *NF)
{
    FILE *F;
    int Cpt=0;
    F=fopen(NF,"r");
    while(fgetc(F)!=EOF)
    {
        Cpt++;
    }
    return Cpt;
}

int compte_m(char *NF)
{
    FILE *F;
    int C;
    int Cpt=0;
    int OnEstSurUnMot;
    F=fopen(NF,"r");
    while((C=fgetc(F))!=EOF)
    {
        if (C=='\n' || C==' ')
            OnEstSurUnMot=0;
        else
        {
            if (!OnEstSurUnMot)
            {
                OnEstSurUnMot=1;
                Cpt++;
            }
        }
    }
    return Cpt;
}
