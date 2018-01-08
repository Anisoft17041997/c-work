#include <stdio.h>
int main(int argc, char const *argv[])
{
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
		if (strcmp(Prenom,"Paule")!=0)
		{
			fprintf(NEWFILE,"%d\t%s\t%s\n",Num,Nom,Prenom);
		}
	}
	

	return 0;
}