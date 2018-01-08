#include "prototypes.h"

/************FONCTION INITIALISE LES FICHIERS*************/

void InitialFichier(char *NomFichier,char *RetenusFichier,char *FichierNotes)
{
    /*Déclaration des variables locales*/
    FILE *FichierAspirant;//Pointeur de fichier
    FILE *Retenus;
    FILE *Notes;
    /*Ouvrir le fichier en ecriture pour le réinitialiser */
    do
    {
        FichierAspirant = fopen(NomFichier,"w+");
        if (!FichierAspirant)
            printf("\aERREUR: Impossible d'ouvrir "
                   "le fichier .\n");
    }
    while (!FichierAspirant);
    fclose(FichierAspirant);
    /*Ouverture du fichier des retenus en ecriture pour le réinitialiser */
    do
    {
        Retenus = fopen(RetenusFichier,"w+");
        if (!Retenus)
            printf("\aERREUR: Impossible d'ouvrir "
                   "le fichier .\n");
    }
    while (!Retenus);
    fclose(Retenus);
    /*Ouverture du fichier des notes en ecriture pour le réinitialiser */
    do
    {
        Notes = fopen(FichierNotes,"w+");
        if (!Notes)
            printf("\aERREUR: Impossible d'ouvrir "
                   "le fichier .\n");
    }
    while (!Notes);
    fclose(Notes);
}

