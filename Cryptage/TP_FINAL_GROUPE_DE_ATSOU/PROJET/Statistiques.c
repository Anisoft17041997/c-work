/************FONCTION StaMoyenne*************/

#include "prototypes.h"

void StaMoyenne(char *RetenusFichier,char *FichierNotes)
{
    /*Declaration des variables locales*/
    double *POINTS;//Tableau de donnes
    int NOTES[5] = {0},//Classes de notes
        MAXN = 0, //nombre maximal de note par classe
        J,I;//Compteur
    double M;
    int NbrCandRet =0;//Nombre de candidat retenus
    int NbrCandIns =0;//Nombre de candidats inscrits
    Aspirant InfoAspirant;
    FILE *Sortie;
    FILE *Retenus;
    /*Ouverture du fichier des candidats retenus en lecture*/
    do
    {
        Retenus = fopen(RetenusFichier,"r");
        if(!Retenus)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Retenus);
    /*Ouverture du fichier des notes en mode lecture*/
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
    /*Calcul du nombre d'enregistrements dans le fichier retenus*/
    while(!feof(Retenus))
    {
        fscanf(Retenus,"%s\t%s\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        NbrCandRet++;
    }
    //Positionnement de la tete de lecture /ecriture au debut du fichier
    fseek(Retenus,0,SEEK_SET);
    //Allocation memoire pour le tableau
    POINTS = (double *)malloc(NbrCandRet*sizeof(double));
    /*Lecture des enregstrements e ecriture des notes dans le tableau*/
    I =0;
    while(!feof(Retenus))
    {
        fscanf(Retenus,"%s\t%s\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        /*ecriture des notes dans le tableau*/
        POINTS[I] = InfoAspirant.Note;
        I++;
    }
    /*Calcul de la moyenne olympique*/
    while(!feof(Sortie))
    {
        fscanf(Sortie,"%s\t%s\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        NbrCandIns++;
    }
    //Positionnement de la tete de lecture /ecriture au debut du fichier
    fseek(Sortie,0,SEEK_SET);
    M = MoyenneOlympique(Sortie,NbrCandIns);
    /*Fermerture des fichier*/
    fclose(Sortie);
    fclose(Retenus);
    /*Initialisation des effectifs par mention (NOTES)*/
    for(I=0;I < 5;I++)
    {
        NOTES[I] = 0;
    }
    printf("\n");
    //Calcul des effectifs par mention
    for(I=0;I < NbrCandRet; I++){
        if(POINTS[I] >= M+8 && POINTS[I]< M+10)
        {
            NOTES[4] += 1;
        }
        else if(POINTS[I] >=  M+6)
        {
            NOTES[3] += 1;
        }
        else if(POINTS[I] >=  M+4)
        {
            NOTES[2] += 1;
        }
        else if(POINTS[I] >=  M+2)
        {
            NOTES[1] += 1;
        }
        else
        {
            NOTES[0] += 1;
        }
    }
    /*Recherche de la classe modale*/
    for(I=0;I < 5; I++){
        if(NOTES[I] > MAXN)
            MAXN = NOTES[I];
    }
    printf("\n\n\n\n");
    /*Graphique*/
    puts(">>> HISTOGRAMME DES RETENUS PAR MENTION <<<");
    //représentation du maximum de ligne
    for(I=MAXN; I>0; I--)
    {
        printf("\n %2d >",I);
        for(J=0 ;J<5; J++)
        {
            if(NOTES[J]>=I)
                printf(" ###############");
            else
                printf("                ");
        }
    }
    //Affichage du domaine des moyennes
    printf("\n     +");
    for(J=0;J<5;J++)
        printf("---------------+");
    printf("\n     I %.2lf - %.2lf I %.2lf - %.2lf I %.2lf - %.2lf I %.2lf - %.2lf I %.2lf - %.2lf I\n"
           ,M,M+2,M+2,M+4,M+4,M+6,M+6,M+8,M+8,M+10);
}

/************FONCTION HistOSexe*************/
void HistoSexe(char *RetenusFichier)
{
    /*Fichiers et pointeurs de fichier*/
    FILE *Retenus;
    /*Autres variables*/
    int Sexe[2] = {0,0}; //Tableau des sexes :[0] Masculin et [1] Feminin
    int I,J; //Compteur d'effectif
    Aspirant InfoAspirant;
    int MAXN;
    /*Ouverture du fichier des candidats retenus en ecriture*/
    do
    {
        Retenus = fopen(RetenusFichier,"r");
        if(!Retenus)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Retenus);
     while(!feof(Retenus))
    {
        fscanf(Retenus,"%s\t%s\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        //Comptage des sexes
        if(InfoAspirant.Sexe=='M')
        {
            Sexe[0]++;
        }
        else
        {
            Sexe[1]++;
        }
    }
    MAXN = (Sexe[0] >Sexe[1])? Sexe[0]:Sexe[1]; //Recherche de l'effectif maximal
    printf("\n\n\n\n");
    /*Graphique*/
    puts(">>> HISTOGRAMME DES RETENUS PAR SEXE <<<");
    //représentation du maximum de ligne
    for(I=MAXN; I>0; I--)
    {
        printf("\n %2d >",I);
        for(J=0 ;J<2; J++)
        {
            if(Sexe[J]>=I)
                printf(" ###############");
            else
                printf("                ");
        }
    }
    //Affichage du domaine des moyennes
    printf("\n     +---------------+---------------+");
    printf("\n     I   MASCULIN    I     FEMININ   I\n");
}

/************FONCTION RETIENT CANDIDATS*************/

/*void HistoEtablissement(char *NomFichier,char *RetenusFichier)
{
    Declaration des variables locales
    Etablissement InfoEts[50];//Tableau des etablissements
    int NbrEts=0;
    int MAXN = 0, //nombre maximal de note par classe
        J,I;//Compteur
    int Trouver = 0;
    Fichiers et pointeurs de fichier*
    Aspirant InfoAspirant;
    FILE *Sortie;
    FILE *Retenus;
    Ouverture du fichier des candidats retenus en lecture
    do
    {
        Retenus = fopen(RetenusFichier,"r");
        if(!Retenus)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Retenus);
    Ouverture du fichier des notes en mode lecture*
    do
    {
        Sortie = fopen(NomFichier,"r");
        if(!Sortie)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Sortie);
    Initialisation*
    for(I=0;I < 50;I++)
    {
        InfoEts[I].Effectif=0;
    }
    for(I=0;I < 50;I++)
    {
        printf("\nT %i",InfoEts[I].Effectif);
    }
    Enregistrement des etablissements et l'effectif des
    candidats provenant de ces etablissement*
    while(!feof(Sortie))
    {
        fscanf(Sortie,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
        if(NbrEts >0)
        {
            printf("\nV %i\n",NbrEts);
            for(I=0;I < NbrEts;I++)
            {
                printf("\n%s\n",InfoEts[I].Nom);
                if(strcmp(InfoAspirant.Ets,InfoEts[I].Nom)==0)
                {
                    InfoEts[I].Effectif++;
                    Trouver = 1;
                }
            }
            if(!Trouver)
            {
                InfoEts[NbrEts].Nom = InfoAspirant.Ets;
                InfoEts[NbrEts].Effectif++;
                NbrEts++;
            }
        }
        else
        {
            InfoEts[0].Nom = InfoAspirant.Ets;
            InfoEts[0].Effectif++;
            NbrEts++;
        }
    }
    for(I=0;I < 5;I++)
        printf("\nK %s\n",InfoEts[I].Nom);
    Fermerture des fichiers
    fclose(Sortie);
    fclose(Retenus);
    Recherche de la classe modale*
    for(I=0;I < NbrEts; I++){
        if(InfoEts[I].Effectif > MAXN)
            MAXN = InfoEts[I].Effectif;
    }
    printf("\n\n\n\n");
    Graphique*
    puts(">>> HISTOGRAMME DES INSCRITS PAR ETABLISSEMENT <<<");
    //représentation du maximum de ligne
    for(I=MAXN; I>0; I--)
    {
        printf("\n %2d >",I);
        for(J=0 ;J<NbrEts; J++)
        {
            if(InfoEts[J].Effectif>=I)
                printf(" ###############");
            else
                printf("                ");
        }
    }
    //Affichage du domaine des moyennes
    printf("\n     +");
    for(J=0;J<NbrEts;J++)
        printf("---------------+");
    printf("\n     I");
    for(J=0;J<NbrEts;J++)
    printf(" %s%11c",InfoEts[J].Nom,'I');
}*/
