#include <stdio.h>
int main(int argc, char const *argv[])
{
	int PALI(char *Chaine);
	FILE *OLDFILE,*NEWFILE;
	char Ancien[]="INFORM.TXT";
	char Nouveau[]="INFBIS.TXT";
	unsigned int Num;
	char Nom[20],Prenom[30];

	OLDFILE=fopen(Ancien,"r");
	if (!OLDFILE)
		printf("Impossible d'ouvrir le fichier %s\n",Ancien);
	NEWFILE=fopen(Nouveau,"w");
	if (!NEWFILE)
		printf("Impossible d'ouvrir le fichier %s\n",Nouveau);
	while(!feof(OLDFILE))
	{
		fscanf(OLDFILE,"%d\t%s\t%s\n",&Num,Nom,Prenom);
		if (!PALI(Nom))
		{
			fprintf(NEWFILE,"%d\t%s\t%s\n",Num,Nom,Prenom);
		}
	}
	printf("%d\n",PALI("EHOLOUM"));

	return 0;
}
int PALI(char *Chaine)
{
	char *Inverse;
	/*Placer Inverse à la fin de la chaine*/
	for(Inverse=Chaine; *Inverse; Inverse++)
		;
	Inverse--;
	/*Vérifier si Chaine est un palindrome*/
	for (; Chaine < Inverse; Chaine++,Inverse--)
	{
		if (*Chaine != *Inverse)
		{
			return 0;
		}
		return 1;
	}
}