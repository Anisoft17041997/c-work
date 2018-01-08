/************FONCTION RETIENT CANDIDATS*************/

#include "prototypes.h"

void RetientCandidats(char *RetenusFichier,char *FichierNotes)
{
    /*Fichiers et Pointeurs de fichiers*/
    FILE *Sortie;          //pointeur sur fichier des inscrits avec leurs notes
    FILE *Retenus;         //pointeur sur fichier des candidats retenus
    /*Autres variables*/
    Aspirant InfoAspirant; //Variable de type enregistrement
    double MoyOlymp;         //Moyenne olympique
    int NbrCandidat=0;       //Nombre d'enregistrements dans le fichier
    /*Ouverture du fichier sortie en mode lecture*/
    do
    {
        Sortie = fopen(FichierNotes,"r");
        if(!Sortie)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Sortie);
    /*Ouverture du fichier des candidats retenus en ecriture*/
    do
    {
        Retenus = fopen(RetenusFichier,"w");
        if(!Retenus)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Retenus);
    /*Calcul du nombre d'enregistrements dans le fichier*/
    while(!feof(Sortie))
    {
        fscanf(Sortie,"%s\t%s\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        NbrCandidat++;
    }
    //Positionnement de la tete de lecture /ecriture au debut du fichier
    fseek(Sortie,0,SEEK_SET);
    /*Appel de MoyenneOlympique*/
    MoyOlymp = MoyenneOlympique(Sortie,NbrCandidat);
    //Positionnement de la tete de lecture /ecriture au debut du fichier
    fseek(Sortie,0,SEEK_SET);
    //Selection des candidats a retenir
    /*Lecture des enregstrements*/
    while(!feof(Sortie))
    {
        fscanf(Sortie,"%s\t%s\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        /*ecriture des notes dans le tableau*/
        if(InfoAspirant.Note >= MoyOlymp)
        {
            fprintf(Retenus,"%s\t%s\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
                    InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,InfoAspirant.Note);
        }

    }
    /*Fermerture des fichiers*/
    fclose(Sortie);
    fclose(Retenus);
}


/************FONCTION MOYENNE OLYMPIQUE*************/

double MoyenneOlympique(FILE *Sortie,int NbrCandidat)
{
    /*ce programme a pour but de calculer et d'afficher la
    moyenne olympique d'un ensemble de nombre saisie au clavier*/
    //Déclaration des variables
    int i=0;//indice courant
    double moyenne;//moyenne olympique
    double TabNote[NbrCandidat];
    Aspirant InfoAspirant;
    /*Lecture des enregstrements*/
    while(!feof(Sortie))
    {
        fscanf(Sortie,"%s\t%s\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        /*ecriture des notes dans le tableau*/
        TabNote[i] = InfoAspirant.Note;
        i++;
    }
    //Calcul de la moyenne
    moyenne = CalculMoyOlym(TabNote,NbrCandidat);
    return moyenne;
}

/************FONCTION RechercheNombreMax*************/

double RechercheNombreMax(double Tnb[],int N)
{
    /*Declaration des variables locales*/
    int i;
    double maxi;//maximum

    maxi=Tnb[0];
    for(i=1; i<N; i++)
    {
        if(Tnb[i]>maxi)
            maxi=Tnb[i];
    }
    return maxi;
}

/************FONCTION RechercheNombreMin*************/

double RechercheNombreMin(double Tnb[],int N)
{
    /*Declaration des variables locales*/
    int i;
    double mini;

    mini=Tnb[0];
    for(i=1; i<N; i++)
    {
        if(Tnb[i]<mini)
            mini=Tnb[i];
    }
    return mini;
}

/************FONCTION CalculSomme *************/

double CalculSomme(double Tnb[],int N)
{
    /*Declaration des variables locales*/
    int i;
    double Somme;
    double maxi;
    double mini;

    maxi = RechercheNombreMax(Tnb,N);
    mini = RechercheNombreMin(Tnb,N);
    Somme=0;
    for(i=0; i<N; i++)
    {
        Somme +=Tnb[i];
    }
    Somme -=(maxi+mini);
    return Somme;

}

/************FONCTION CalculMoyOlym*************/

double CalculMoyOlym(double Tnb[],int N)
{
    double Somme;
    Somme=CalculSomme(Tnb,N);
    return (Somme/(N-2));
}



