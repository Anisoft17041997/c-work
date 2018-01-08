/************FONCTION ACTION REPONSE*************/


/*#include "prototypes.h"

void ActionReponse(int Rep,char *NomFichier,char *RetenusFichier,char *FichierNotes)
{
    int Repons;//Reponse pour modification
    switch (Rep)
    {
        case 1:
        {
            InitialFichier(NomFichier);
            printf("Tous les fichiers ont %ct%c vid%cs avec succes\n",130,130,130);
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
            puts("LISTE DES INSCRITS POUR LE STAGE A 3L \n");
            system("type Les_aspirants_au_stage_a_3L_Annee_2016.txt");
        }
        break;
        case 5:
        {
            RetientCandidats(RetenusFichier,FichierNotes);
            puts("LISTE DES CANDIDATS RETENUS \n");
            system("type Les_aspirants_retenus_pour_le_stage_a_3L_Annee_2016.txt");
        }
        break;
        case 0:
            {
                system("exit");
            }
    }
}
*/
