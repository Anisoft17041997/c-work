
#include "prototypes.h" /*Fichier des prototypes de fonction*/


/*****************AFFICHAGE DES CANDIDATS INSCRITS*****************/

void AfficheCandInscrits(char *NomFichier)
{
    Aspirant InfoAspirant;//Variable de type enregistrement
    FILE *FichierAspirant;
    //Overture du fichier aspirant en mode AJOUT
    //Lecture des informations sur l'aspirant au
    //clavier et ecriture de ces dernierres dans le fichier

    do
    {
        FichierAspirant = fopen(NomFichier,"r");
        if(!FichierAspirant)
        {
            printf("\a");
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!FichierAspirant);

    while (!feof(FichierAspirant))
    {
        fscanf(FichierAspirant,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
        printf("%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
    }
    fclose(FichierAspirant);
}


/*****************AFFICHAGE DES NOTES DES CANDIDATS*****************/

void AfficheCandNotes(char *FichierNotes)
{
    //char *FichierNotes ="Les_aspirants_au_stage_a_3L_Annee_2016_avec_les_NOTES.txt";
    Aspirant InfoAspirant;/*information sur les aspirants        */
    FILE *Sortie;
    /*Ouverture du fichier sortie en mode ecriture*/
    do
    {
        Sortie = fopen(FichierNotes,"r");
        if(!Sortie)
        {
            printf("\a");
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Sortie);

    while(!feof(Sortie))
    {
        fscanf(Sortie,"%s\t\t%s\t\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        printf("%s\t\t%s\t\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,InfoAspirant.Note);
    }
    fclose(Sortie);
}


/*****************AFFICHAGE DE LA LISTE DES CANDIDATS RETENUS*****************/

void AfficheCandRetnus(char *RetenusFichier)
{
    //char *FichierNotes ="Les_aspirants_au_stage_a_3L_Annee_2016_avec_les_NOTES.txt";
    Aspirant InfoAspirant;/*information sur les aspirants        */
    FILE *Retenus;
    /*Ouverture du fichier sortie en mode ecriture*/
    do
    {
        Retenus = fopen(RetenusFichier,"r");
        if(!Retenus)
        {
            printf("\a");
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Retenus);

    while(!feof(Retenus))
    {
        fscanf(Retenus,"%s\t\t%s\t\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,&InfoAspirant.Note);
        printf("%s\t\t%s\t\t%c\t%s\t%s\t%lf\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,InfoAspirant.Note);
    }
    fclose(Retenus);
}
