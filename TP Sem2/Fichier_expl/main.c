#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *FP;
    FP=fopen("D:\Cour C sem2\PROGRAMMATION EN LANGAGE C.pdf","r");
    if (!FP)
    {
        printf("Impossible d'ouvrir le fichier");
        exit(-1);
    }
    while (!feof(FP))
    {
        putchar(fgetc(FP));
    }
    fclose(FP);
    return 0;
    /*
        FILE *fichier;//Pointer on file;
    char Name_f[30],Name_p[30];//File name and person name
    int C,Nb_eng;
    */
    /*1st part: Create and Complete file*/
    /*
    printf("Enter the file name: ");
    scanf("%s",Name_f);
    fichier=fopen(Name_f,"w");
    printf("Enter the record number: ");
    scanf("%d",&Nb_eng);
    C=1;
    while (C<=Nb_eng)
    {
        printf("Enter the name of person number %d : ",C);
        scanf("%s",Name_p);
        fprintf(fichier,"%s\n",Name_p);
        C++;
    }
    fclose(fichier);
    /*2n.d part: Read and print the contain of file */
    /*
    fichier=fopen(Name_f,"r");
    C=1;
    while (!feof(fichier))
    {
        fscanf(fichier,"%s\n",Name_p);
        printf("Name %d: %s\n",C,Name_p);
        C++;
    }
    fclose(fichier);
    return 0;


    */

}
