/************FONCTION ACTION REPONSE*************/


#include "prototypes.h"

void ActionReponse(int Rep,char *NomFichier,char *RetenusFichier,char *FichierNotes)
{
    int Repons;//Reponse pour modification
    switch (Rep)
    {
        case 1:
        {
            InitialFichier(NomFichier,RetenusFichier,FichierNotes);
            printf("Tout les fichiers ont %ct%c vid%cs avec succes\n",130,130,130);
        }
        break;
        case 2:
        {
            ModificationMenu(NomFichier);
            Repons = ChoixModification();
            if(Repons == 1)
            {
                Ajout(NomFichier);
                printf("Les Candidats ont %ct%c ajout%cs avec succes\n",130,130,130);
            }
            else if(Repons == 2)
            {
                Modification(NomFichier);
            }
            else if(Repons == 3)
            {
                Supression(NomFichier);
            }
            else if(Repons == 0)
            {
                break;
            }
        }
        break;
        case 3:
        {
            SaisieNote(NomFichier);
        }
        break;
        case 4:
        {
            puts("\n<<<LISTE DES INSCRITS POUR LE STAGE A 3L<<<\n");
            AfficheCandInscrits(NomFichier);
        }
        break;
        case 5:
        {
            printf("\n>>>LISTE DES CANDIDATS AVEC LEUR NOTE >>>\n");
            AfficheCandNotes(FichierNotes);
        }
        break;
        case 6:
        {
            puts("\n<<< LISTE DES CANDIDATS RETENUS<<<\n");
            RetientCandidats(RetenusFichier,FichierNotes);
            AfficheCandRetnus(RetenusFichier);
        }
        break;
        case 7:
        {
            StaMoyenne(RetenusFichier,FichierNotes);
            HistoSexe(RetenusFichier);
        }
        break;
        case 8:
        {
            FonctionAide();

        }
        break;
    }
}
