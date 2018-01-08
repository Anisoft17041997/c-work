#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define S "START"
#define E "END"
#define END "ENDOFINPUT"
#define maxligne 100

/* DECRYPTER */

int main()
{
    void decrypter(char * chaine);
    FILE * INPUT;
    FILE * OUTPUT;
    char * in="Code.txt";
    char * out="Decoder.txt";
    char * ligne = NULL;

    printf("Debut\n");
    INPUT = fopen(in,"r+");
    printf("Read 1\n");
    OUTPUT = fopen(out,"w");
    printf("Read 2\n");

    if(INPUT == NULL)
    {
        printf("Erreur I\n");
        exit(EXIT_FAILURE);
        if(OUTPUT == NULL)
        {
            printf("Erreur I\n");
            exit(EXIT_FAILURE);
        }
    }
    printf("Debut lecture file\n");
    while(!feof(INPUT))
    {
        printf("Lecture file\n");
        do
        {
            fgets(ligne,maxligne,INPUT);
            if(strcmp(ligne,S) == 0)
            {
                fgets(ligne,maxligne,INPUT);
                decrypter(ligne);
                fprintf(OUTPUT,"%s\n",ligne);
            }
            fgets(ligne,maxligne,INPUT);
        }
        while(strcmp(ligne,END) == 0);
    }

    fclose(OUTPUT);
    fclose(INPUT);
    return 0;
}


void decrypter(char * chaine)
{
    int indexTab;
    int cle=5 ;

    for(indexTab = 0; chaine[indexTab] != '\0'; indexTab++)
    {
        if(chaine[indexTab] >= 'A' && chaine[indexTab] <= 'Z')
        {
            chaine[indexTab] -= 'A';
            chaine[indexTab] -= cle;

            while(chaine[indexTab] < 0)
                chaine[indexTab] += 26;

            chaine[indexTab] %= 26;
            chaine[indexTab] += 'A';
        }
        else if(chaine[indexTab] >= 'a' && chaine[indexTab] <= 'z')
        {
            chaine[indexTab] -= 'a';
            chaine[indexTab] -= cle;

            while(chaine[indexTab] < 0)
                chaine[indexTab] += 26;

            chaine[indexTab] %= 26;
            chaine[indexTab] += 'a';
        }
        printf("%c",chaine[indexTab]);
        system("");
    }

}
