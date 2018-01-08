/*  Name    :TP.c
    Purpose :Gérer les inscriptions des aspirants pour le compte du stage dans l'établissement Lome La Langue.
    Authors :   ATSOU Sélom Kodjo
                AGBONON EDAGBEDJI Yao Anicet
                EHOLOUM gauthier
                KETOGLO Komi Roland
                ASSIOU Piabola
    Dates   : 29/07/2016, 31/07/2016
*/


#include "prototypes.h" //Fichier des prototypes de fonction
/*Declarations globales*/
char *NomFichier ="Les_aspirants_au_stage_a_3L_Annee_2016.txt";
char *FichierNotes ="Les_aspirants_au_stage_a_3L_Annee_2016_avec_les_NOTES.txt";
char *RetenusFichier ="Les_aspirants_retenus_pour_le_stage_a_3L_Annee_2016.txt";

int main()
{
    char rep;
    /*Couleurs*/
    system("color 1E");
    /*Titre*/
    do
    {
        system("cls");
        puts("*===============================*\n"
             "* GESTIONNAIRE DES INSCRIPTIONS *\n"
             "*     POUR LE STAGE A 3L        *\n"
             "*===============================*\n");
        /*Declarations des variables locales*/
        //Pointeur de fichier
        int Reponse; //Choix de l'utilisateur
        /*Affichage du menu */
        Menu();
        Reponse =Choix();
        ActionReponse(Reponse,NomFichier,RetenusFichier,FichierNotes);
        /*Continution*/
        printf("\nVoulez-vous poursuivre?(O/N): ");
        rep= toupper(getch());
        printf("\n\n");
    }
    while(rep == 'O');
    printf("\n\n****MERCI D'AVOIR UTILISE CE PROGRAMME****\n\n");
    return 0;
}
