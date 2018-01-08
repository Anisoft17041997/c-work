#include <stdio.h>
#include <stdlib.h>
#define LGMAX 80
int main()
{
    char monfic[]="Les_aspirants_au_stage_a_3L_Annee_2016.txt";
    FILE* entree;
    int num=0;
    char ligne[LGMAX];
    //printf("Donner le nom du fichier a lister: ");
    //scanf("%20s",monfic);
    entree=fopen(monfic,"r");
    printf("Liste du fichier %s: \n",monfic);
    while(fgets(ligne,LGMAX,entree))
    {
        printf("\n%2d ",++num);
        printf("%s",ligne);
    }
    return 0;
}
