#include "prototypes.h"


/*************LES FONCTION  DE MISE A JOUR*********************/

/*Ajout();
Modification();
Supression();
*/

/***************FONCTION AJOUT*****************/
/*Elle prend en charge les Ajouts d'Aspirants */

void Ajout(char *NomFichier)
{
    /*Declaration des variables locales*/
    int NbAjout;
    int C;
    int i = 0;
    char Again;
    Aspirant InfoAspirant;//Variable de type enregistrement
    FILE *FichierAspirant;
    /*Overture du fichier aspirant en mode AJOUT*/
    /*Lecture des informations sur l'aspirant au*/
    /* clavier et ecriture de ces dernier dans le fichier*/
    do
    {
        do
        {
            FichierAspirant = fopen(NomFichier,"a");
            if(!FichierAspirant)
            {
                printf("Warning!!! Unable to open the file\n"
                       "Try again \n");
            }
        }
        while(!FichierAspirant);
        /*Saisie du nombre d'enregistrement et boucle*/
        do
        {
            printf("\nCombien de candidats allez-vous enregistrer : ");
            fflush(stdin);
            C = scanf("%i",&NbAjout);
            if(NbAjout < 0 || !C)
            {
                putchar('\a');
                printf("Nombre invalide. Entrer un nombre superieur a zero.\n");
            }
        }
        while(NbAjout < 0 || !C);
        /*Enregistrement des candidats*/
        while(NbAjout > 0)
        {
            printf("\n\n<<<  Donnees sur le %d%s candidat  >>>\n",i+1,(i==0)?"er":"eme");
            fflush(stdin);
            printf("%30s","Nom : ");
            gets(InfoAspirant.Nom);
            //Prénoms
            printf("%30s","Prenoms : ");
            fflush(stdin);
            gets(InfoAspirant.Prenoms);
            //sexe
            do
            {
                fflush(stdin);
                printf("%30s","Sexe (M/F) : ");
                InfoAspirant.Sexe=toupper(getchar());
                if(InfoAspirant.Sexe != 'M' && InfoAspirant.Sexe !='F')
                    printf("Saisie incorrect. Veillez reesayer \n");
            }
            while(InfoAspirant.Sexe != 'M' && InfoAspirant.Sexe !='F');
            //Niveau d'étude
            printf("%30s","Niveau d'etude : ");
            fflush(stdin);
            scanf("%s",InfoAspirant.Niveau);
            //Etablissements
            printf("Etablissement de provenance : ");
            fflush(stdin);
            gets(InfoAspirant.Ets);
            /*Ecriture de l'enregistrement dans le fichier*/
            fprintf(FichierAspirant,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
                    InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
            NbAjout--;
            i++;
        }
        fclose(FichierAspirant);
        /*Demande si l'utilisateur veut encore faire des enregistrements*/
        do
        {
            printf("Avez-vous d'enregistrement a faire encore ? (y/n) :");
            fflush(stdin);
            Again = tolower(getchar());
            if(Again != 'y' && Again != 'n')
            {
                printf("\a");
                printf("\nSaisie incorrecte. Entrez y ou n ");
            }
        }while(Again != 'y' && Again != 'n');
    }
    while(Again == 'y');
    /*Fermerture du fichier*/
}


/**********************************FONCTION Modification*******************/
void Modification(char *NomFichier)
{
    /*Déclaration des variables locales*/
    char Nom[30];
    char Prenom[50];
    FILE * FichierAspirant;
    FILE *Sortie;
    Aspirant InfoAspirant;//Variable de type enregistrement
    int Trouver=0;
    int renom; //Merque de succes de l'operation de renommage
    /*Ouverture du fichier d'entree en mode lecture*/
    do
    {
        FichierAspirant = fopen(NomFichier,"r");
        if(!FichierAspirant)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!FichierAspirant);
    /*Ouverture du fichier sortie en mode ecriture*/
    do
    {
        Sortie = fopen("Sortie.txt","w");
        if(!FichierAspirant)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Sortie);
    /*Leture de l'enregistrement a modifier*/
    printf("\n");
    printf("Entrer le Nom du Candidat %c modifier : ",133);
    fflush(stdin);
    gets(Nom);
    printf("Entrer le Pr%cnom du Candidat a modifier : ",130);
    gets(Prenom);
    /*Recherche de l'enregistrement et modification si elle existe*/
    while(!feof(FichierAspirant))
    {
        fscanf(FichierAspirant,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
        if((strcmp(InfoAspirant.Nom,Nom)==0 && (strcmp(InfoAspirant.Prenoms,Prenom))==0))
        {
            Trouver=1;
            ModificationCandidat(InfoAspirant,Sortie);
        }
        else
        {
            fprintf(Sortie,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
                    InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
        }
        if(feof(FichierAspirant) && !Trouver)
        {
            printf("\nL'enregistrement sp%ccifier est inexistant.\n"
                   "Veillez v%crifier les orthographes et r%cessayer \n",130,130,130);
        }
    }
    fclose(Sortie);
    fclose(FichierAspirant);
    /*supression de l'encien fichier*/
    do
    {
        renom = remove(NomFichier);
        if(renom)
        {
            fflush(stdin);
            printf("Supression du fichier a echouee \n");
        }
    }
    while(renom);
    /*renommage du fichier de sortie*/
    do
    {
        renom = rename("Sortie.txt",NomFichier);
        if(renom) printf("Renommage impossible \n");
    }
    while(renom);
}

/********************FONCTION ModificationCandidat*********************/

void ModificationCandidat(Aspirant InfoAspirant,FILE * Sortie)
{
    /*Enregistrement des candidats*/
    printf("\n");
    puts("PROCEDEZ AUX MODIFICATIONS \n");
    fflush(stdin);
    printf("%30s","Nom : ");
    gets(InfoAspirant.Nom);
    //Prénoms
    printf("%30s","Prenoms : ");
    fflush(stdin);
    gets(InfoAspirant.Prenoms);
    //sexe
    do
    {
        fflush(stdin);
        printf("%30s","Sexe (M/F) : ");
        InfoAspirant.Sexe=toupper(getchar());
        if(InfoAspirant.Sexe != 'M' && InfoAspirant.Sexe !='F')
            printf("Saisie incorrect. Veillez reesayer \n");
    }
    while(InfoAspirant.Sexe != 'M' && InfoAspirant.Sexe !='F');
    //Niveau d'étude
            printf("%30s","Niveau d'etude : ");
            fflush(stdin);
            scanf("%s",InfoAspirant.Niveau);
    //Etablissements
    printf("Etablissement de provenance : ");
    fflush(stdin);
    gets(InfoAspirant.Ets);
    /*Ecriture de l'enregistrement dans le fichier de sortie*/
    fprintf(Sortie,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
            InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
    printf("Les modifications sont prises en compte\n");
}

/********************FONCTION Supression*********************/
void Supression(char *NomFichier)
{
    /*Déclaration des variables locales*/
    char Nom[30];
    char Prenom[50];
    FILE * FichierAspirant;//Pointeur de fichier
    FILE *Sortie;
    Aspirant InfoAspirant;//Variable de type enregistrement
    int Trouver=0; //Indicateur de presence de Candidat
    int renom; //Merque de succes de l'operation de renommage
    /*Ouverture du fichier d'entree en mode lecture*/
    do
    {
        FichierAspirant = fopen(NomFichier,"r");
        if(!FichierAspirant)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!FichierAspirant);
    /*Ouverture du fichier sortie en mode ecriture*/
    do
    {
        Sortie = fopen("Sortie.txt","w");
        if(!FichierAspirant)
        {
            printf("Warning!!! Unable to open the file\n"
                   "Try again \n");
        }
    }
    while(!Sortie);
    /*Leture de l'enregistrement a suprimer*/
    printf("\nEntrer le Nom du Candidat %c suprimer : ",133);
    fflush(stdin);
    gets(Nom);
    printf("Entrer le Pr%cnom du Candidat %c suprimer : ",130,133);
    gets(Prenom);
    /*Recherche de l'enregistrement et supression si elle existe*/
    /*l'indice de l'enregistrement est contenu dans LigneFichier*/
    while(!feof(FichierAspirant))
    {
        fscanf(FichierAspirant,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
        if((strcmp(InfoAspirant.Nom,Nom)==0 && (strcmp(InfoAspirant.Prenoms,Prenom)==0)))
        {
            Trouver=1;
            printf("\nSupression r%cussie !\n",130);
        }
        else
        {
            fprintf(Sortie,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
                    InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
        }
        if(feof(FichierAspirant) && !Trouver)
        {
            printf("\nL'enregistrement sp%ccifier est inexistant.\n"
                   "Veillez v%crifier les orthographes et r%cessayer \n",130,130,130);
        }
    }
    /*fermerture du fichier*/
    fclose(FichierAspirant);
    fclose(Sortie);
    /*supression de l'encien fichier*/
    do
    {
        renom = remove(NomFichier);
        if(renom) printf("Supression impossible \n");
    }
    while(renom);
    /*renommons le fichier de sortie*/
    do
    {
        renom = rename("Sortie.txt",NomFichier);
        if(renom) printf("Renommage impossible \n");
    }
    while(renom);
}
