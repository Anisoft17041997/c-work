#include "prototypes.h" //Fichier des prototypes de fonction


/************FONCTION SAISIENOTES*************/
void SaisieNote(char *NomFichier)
{
    /*Les Fichier et Pointeurs*/
    FILE *FichierAspirant;
    FILE *Sortie;
    /*Autres déclarations*/
    Aspirant InfoAspirant;
    /*Ouverture du fichier d'entree en mode lecture*/
    do{
        FichierAspirant = fopen(NomFichier,"r");
        if(!FichierAspirant){
            printf("Warning!!! Unable to open the file\n"
                    "Try again \n");
        }
    }
    while(!FichierAspirant);
    /*Ouverture du fichier sortie en mode ecriture*/
    do{
        Sortie = fopen("Les_aspirants_au_stage_a_3L_Annee_2016_avec_les_NOTES.txt","w");
        if(!FichierAspirant){
            printf("Warning!!! Unable to open the file\n"
                    "Try again \n");
        }
    }
    while(!Sortie);
    /*Lecture des enregistrments et saisie des notes*/
    while(!feof(FichierAspirant))
    {
        fscanf(FichierAspirant,"%s\t%s\t%c\t%s\t%s\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
               &InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau);
        do{
            printf("Entrer la note du Candidat %s %s : ",InfoAspirant.Nom,InfoAspirant.Prenoms);
            //Appel de entrer pour controle de note
            InfoAspirant.Note = EntrerNote();
            if(InfoAspirant.Note == -1) printf("\nLa note entr%ce est invalide. R%cessayer\n",130,130);
        }while(InfoAspirant.Note == -1);
        fprintf(Sortie,"%s\t%s\t%c\t%s\t%s\t%f\n",InfoAspirant.Nom,InfoAspirant.Prenoms,
                InfoAspirant.Sexe,InfoAspirant.Ets,InfoAspirant.Niveau,InfoAspirant.Note);
    }
    fclose(FichierAspirant);
    fclose(Sortie);
}


/************FONCTION ENTRERNOTE*************/
double EntrerNote()
{
    /* Déclarations */
    char CH[100]; /* chaîne numérique à convertir */
    double N; /* résultat numérique               */
    int I;    /* indice courant                   */
    int SIG;  /* signe de la valeur rationnelle   */
    int DEC;  /* nombre de décimales              */
    int OK;   /* indicateur logique précisant si la */
              /* chaîne a été convertie avec succès */
    /* Saisie de la chaîne */
    fflush(stdin);
    gets(CH);
    /* Conversion de la chaîne :    */
    /* Initialisation des variables */
    OK=1;
    N=0.0;
    I=0;
    SIG=1;
    /* Traitement du signe */
    if (CH[I]=='-') SIG=-1;
    if (CH[I]=='-' || CH[I]=='+')
        I++;
    /* Positions devant le point décimal */
    for (I=0 ; isdigit(CH[I]); I++)
    N = N*10.0 + (CH[I]-'0');
    /* Traitement du point décimal */
    if (CH[I]=='.')
        I++;
    else if (CH[I])
        OK=0;
    /* Traitement et comptage des décimales */
    for (DEC=0; isdigit(CH[I]); I++, DEC++)
        N = N*10.0 + (CH[I]-'0');
    if (CH[I]) OK=0;
    /* Calcul de la valeur à partir du signe et */
    /* du nombre de décimales. */
    N = SIG*N/pow(10,DEC);
    //End trait
    /*Result edition*/
    return  (OK)? N :-1.0;
}
