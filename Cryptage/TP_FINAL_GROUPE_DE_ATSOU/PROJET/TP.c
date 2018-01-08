/*
    Name    :TP.c
    Purpose :G�rer les inscriptions et la s�lection des aspirants pour le compte du stage
             dans l'�tablissement "Lome La Langue".
             Ce projet a �t� r�alis� dans le cadre d'un test de fin de semestre du cours
             de langage C dispens� par Mr AKAKPO Folly que nous tenons � remercier.
    Authors :AGBONON EDAGBEDJI Yao Anicet
             ASSIOU Piabola
             ATSOU S�lom Kodjo
             EHOLOUM Gauthier
             KETOGLO Komivi Roland
    Dates   :29/07/2016,05/07/2016.
    Version 1.0.0.0
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
        if(Reponse==0)
        break;
        /*Continution*/
        do
        {
            printf("\n<<< Voulez-vous retourner au menu principale ? Oui/Non >>>");
            fflush(stdin);
            rep= toupper(getch());
            if(rep != 'O' && rep != 'N')
            {
                printf("\a");
                printf("\nSaisie incorrecte. Entrez O ou N ");
            }
            printf("\n\n");
        }while(rep != 'O' && rep != 'N');
    }
    while(rep == 'O');
    printf("\n\n<<< ****MERCI D'AVOIR UTILISE CE PROGRAMME**** >>>\n\n");
    return 0;
}
