#include "prototypes.h"

/*************FOCTION MENU : MENU PRINCIPALE**************/
void Menu()
{
    /*Affichage du menu general*/
    puts("GESTION DES INSCRITS\n");
    puts("\t1 INITIALISER LES FICHIERS \n");
    puts("\t2 MISE A JOUR\n");
    puts("\t3 SAISIE DES NOTES\n");
    puts("\t4 CANDIDATS INSCRITS\n");
    puts("\t5 CANDIDATS COMPOSES\n");
    puts("\t6 CANDIDATS A RETENIR\n");
    puts("\t7 STATISTIQUES\n");
    puts("\t8 AIDE \n");
    puts("\t0 SORTIR");
}

/********FOCTION MENU MODIFICATION :SOUS MENU *************/
void ModificationMenu()
{
    /*Affichage du menu de mis a jour*/
    printf("\n");
    puts("MIS A JOUR \n");
    puts("\t1 AJOUT\n");
    puts("\t2 MODIFICATIONS \n");
    puts("\t3 SUPRESSION\n");
    puts("\t0 POUR SORTIR");
}

/****************FOCTION CHOIX PRINCIPALE*******************/

int Choix()
{
    int Reponse; //Reponse de l'utilisateur
    int C; //Variable de controle du choix
    do{
        printf("\nREPONSE : ");
        fflush(stdin);
        C = scanf("%i",&Reponse);
        if(!C || Reponse < 0 || Reponse >8){
            putchar('\a');
            printf("\nChoix incorrecte. Veillez choisir de nouveau\n");
        }
    }while(!C || Reponse < 0 || Reponse >8);
    return Reponse;
}

/***********FOCTION CHOIX POUR MODIFICATION*******************/

int ChoixModification()
{
    int Repons; //Reponse de l'utilisateur
    int C; //Variable de controle du choix
    do{
        printf("\nREPONSE : ");
        fflush(stdin);
        C = scanf("%i",&Repons);
        if(!C || Repons < 0 || Repons >3){
            putchar('\a');
            printf("\nChoix incorrecte. Veillez choisir de nouveau\n");
        }
    }while(!C || Repons < 0 || Repons >3);
    return Repons;
}

