#include"stdio.h"
/*****************************************************************************/
/* */
/* main */
/* */
/*****************************************************************************/
int main()
{
    FILE *fi;
    char nom[80];
    char article[80];
    int nombre,prix;
    if((fi=fopen("D:\"C-Works\\TP Sem2\\Test_c_fichier","r"))==NULL)
        printf("Impossible d'ouvrir le fichier exer6.data\n");
    else
    {
        while(fscanf(fi,"%s%s%d%d",nom,article,&nombre,&prix)!=EOF)
            printf("%s%s%d\n",nom,article,nombre*prix);
        fclose(fi);
    }
return 0;
}
