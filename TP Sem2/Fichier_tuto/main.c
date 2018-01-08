#include <stdio.h>
#include <stdlib.h>
#define Taille 25

int main(int argc, char const *argv[])
{
    /*
        fopen : ouvrir un fichier->mode d'ouverture >r(lecture seule,fichier deja creer)
                                                   w(ecriture seule, fichier creer s'il n'existe pas )
                                                   a(ajout en fin de fichier s'il n'existe pas )
                                                   r+(lecture et ecriture, fichier deja creer)
                                                   w+(lecture et ecriture,apres suppression du contenu,creer s'il n'existe pas)
                                                   a+(ajout en lecture/ecriture,fin de fichier creer s'il n'existe pas)
        fclose : fermer un fichier ouvert
        [LECTURE]
          fgetc : recupere un caractere courant d'un fichier (fonctionne comme un curseur)
          fgets : recupere une ligne d'un fichier et la stock dans une chaine
          fscanf : recupere du contenu formate d'un fichier et la stock dans une/des variables
    */
	FILE* fic=fopen("Player.data","r");
	//int caract=0;
	char pseudo[Taille];
    int level=0;
    int coord_x;
    int coord_y,i;

	if (fic==NULL)
	{
		exit(1);
	}
	/*else
	{
		do
		{
			caract=fgetc(fic);
			printf("%c",caract);
		}while(caract!=EOF);

	}
    */
	fscanf(fic,"%s %d %d %d",pseudo,&level,&coord_x,&coord_y);
	printf("Pseudo: %s \n",pseudo);
	printf("Niveau %d position {%d-%d}",level,coord_x,coord_y);
	/*while(fgets(chaine,Taille,fic)!=NULL)
		printf("%s",chaine);
    */
	fclose(fic);//Retourne 0 (fermeture ok), ou EOF (fermeture echouer)
	FILE* fichier=fopen("Save/Player.data","a");
	if(fichier==NULL)
        exit(1);
    fputc('\nG',fichier);
    fputc('A',fichier);
    fputc('U',fichier);
    fputc('T',fichier);
    fputc('H',fichier);
    fputc('I',fichier);
    fputc('E',fichier);
    fputc('R',fichier);
    fputs("\nGauthier",fichier);

    fclose(fichier);
	return 0;
}
