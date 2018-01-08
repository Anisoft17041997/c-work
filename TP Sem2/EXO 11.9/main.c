#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ANCIEN[]="D:\\TEXT.TXT";
    char NOUVEAU[]="D:\\TEXT_TRIE.TXT";
    FILE *INFILE,*OUTFILE;
    char *T[50];
    char CHAINE[50];
    char *AIDE;
    int N_MOTS;
    int i,j,fin=-1;
    INFILE=fopen(ANCIEN,"r");
    while(!INFILE)
    {
        printf("\aErreur: Impossible d'ouvrir le fichier %s",ANCIEN);
        exit(-1);
    }
    N_MOTS=0;
    while(!INFILE)
    {
        printf("\aErreur: Impossible d'ouvrir le fichier %s",ANCIEN);
        exit(-1);
    }
    while(!feof(INFILE))
    {
        fscanf(INFILE,"%s\n",CHAINE);
        T[N_MOTS]=malloc(strlen(CHAINE)+1);
        if(T[N_MOTS])
            strcpy(T[N_MOTS],CHAINE);
        else
        {
            printf("\aPas de memoire! ");
            exit(-1);
        }
        N_MOTS++;
    }
    fclose(INFILE);
    /*Trie des enregistrements du fichier*/
    for(i=N_MOTS-1;i>0;i=fin)
    {
        fin=0;
        for(j=0;j<i;j++)
        {
            if(strcmp(T[j],T[j+1]))
            {
                fin=j;
                AIDE=T[j];
                T[j]=T[j+1];
                T[j+1]=AIDE;
            }
        }
    }
    OUTFILE=fopen(NOUVEAU,"w+");
    while(!OUTFILE)
    {
        printf("\aErreur: Impossible d'ouvrir le fichier %s",NOUVEAU);
        exit(-1);
    }
    for(i=0;i<N_MOTS;i++)
    {
        fprintf(OUTFILE,"%s\n",T[i]);
    }
    fclose(OUTFILE);

    return 0;
}
