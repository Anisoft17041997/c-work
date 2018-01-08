#include "prototypes.h"

/************FONCTION INITIALISE LES FICHIERS*************/

void InitialFichier(char *NomFichier)
{
    /*Déclaration des variables locales*/
    FILE *FichierAspirant;//Pointeur de fichier
    /*Ouvrir le fichier en ecriture pour le réinitialiser */
    do
    {
        FichierAspirant = fopen(NomFichier,"w");
        if (!FichierAspirant)
            printf("\aERREUR: Impossible d'ouvrir "
                   "le fichier .\n");
    }
    while (!FichierAspirant);
    fclose(FichierAspirant);
}
