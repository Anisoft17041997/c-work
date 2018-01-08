#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LG 80
int main()
{
    struct candidat
    {
        char nom[30];
        char prenom[40];
        char sexe[2];
        char Etbs[30];
        char Nivo[30];
        int note;
    };

    FILE* Fic_Asp;
    char Fic_Cand[40];
    int Nb_Asp;
    int i;
    int nbmots;
    //int fin;
    int j;
    struct candidat Cand[100];
    char ligne[LG];
    char *T[50][50];
    char *T1[50];
    char *AIDE[50];

    do
    {
        printf("\nEntrer le nom du fichier: ");
        scanf("%s",Fic_Cand);
        Fic_Asp=fopen(Fic_Cand,"w");
        if(!Fic_Asp)
            printf("\a\aErreur d'ouverture du fichier %s!",Fic_Cand);
    }
    while(!Fic_Asp);
    printf("\nEntrer le nombre de candidats: ");
    scanf("%d",&Nb_Asp);
    fflush(stdin);
    for(i=0; i<Nb_Asp; i++)
    {
        printf("\nLes info de la %d%s personne: \n\n\n",i+1,(i==0)?"ere":"eme");
        printf("Entrer le nom   : ");
        fflush(stdin);
        gets(Cand[i].nom);
        printf("\nEntrer le prenom: ");
        fflush(stdin);
        gets(Cand[i].prenom);
        printf("\nEntrer le sexe  : ");
        fflush(stdin);
        gets(Cand[i].sexe);
        printf("\nEtablissement   : ");
        fflush(stdin);
        gets(Cand[i].Etbs);
        printf("\nNiveau d'etude  : ");
        fflush(stdin);
        gets(Cand[i].Nivo);
    }
    for(i=0; i<Nb_Asp; i++)
    {
        fprintf(Fic_Asp,"%s\t",Cand[i].nom);
        fprintf(Fic_Asp,"%s\t",Cand[i].prenom);
        fprintf(Fic_Asp,"%s\t",Cand[i].sexe);
        fprintf(Fic_Asp,"%s\t",Cand[i].Etbs);
        fprintf(Fic_Asp,"%s\t\n",Cand[i].Nivo);
    }
    fclose(Fic_Asp);
    Fic_Asp=fopen(Fic_Cand,"r");
    printf("Voici la liste des candidats par ordre d'inscription \n");
    //printf("%7s\t %6s\t %6s\t %5s %5s\n","Nom","Prenom","Sexe","Etablissement","Niveau");
    i=0;
    while(fgets(ligne,LG,Fic_Asp))
    {
        printf("\n%2d.) ",++i);
        printf("%s",ligne);
    }
    fclose(Fic_Asp);
    Fic_Asp=fopen(Fic_Cand,"r");
    /*Copie des enregistrements du fichier dans un tableau*/
    for(i=0; i<Nb_Asp; i++)
    {
        for(j=0;j<50;j++)
        {
            while(fgets(T,LG,Fic_Asp)!=NULL);

        }
    }
    for(i=0; i<Nb_Asp; i++)
    {
        printf("\nEntrer la note de %s: ",Cand[i].nom);
        scanf("%d",&Cand[i].note);
    }
    /*
    Fic_Asp=fopen(Fic_Cand,"r");
    while(!Fic_Asp)
    {
        printf("\aErreur: Impossible d'ouvrir le fichier %s",Fic_Cand);
        exit(-1);
    }
    nbmots=0;

    while(!feof(Fic_Asp))
    {
        fscanf(Fic_Asp,"%s",ligne);
        T[nbmots]=malloc(strlen(ligne)+1);
        if(T[nbmots])
        {
            strcpy(T[nbmots],ligne);
        }
        else
        {
            printf("\aPas de memoire! ");
            exit(-1);
        }
        nbmots++;
    }
    fclose(Fic_Asp);
    */
    /*Tri des noms des candidats par ordre alphabetique*/
    /*for(i=nbmots-1; i>0; i=fin)
    {
        fin=0;
        for(j=0; j<i; j++)
        {
            if(strcmp(T[i],T[j]))
            {
                fin=j;
                AIDE=T[j];
                T[j]=T[j+1];
                T[j+1]=AIDE;
            }
        }
    }
    Fic_Asp=fopen(Fic_Cand,"w+");
    while(!Fic_Asp)
    {
        printf("\aErreur: Impossible d'ouvrir le fichier %s",Fic_Cand);
        exit(-1);
    }
    for(i=0;i<nbmots;i++)
    {
        fprintf(Fic_Asp,"%s\n",T[i]);
    }
    fclose(Fic_Asp);

    Fic_Asp=fopen(Fic_Cand,"w");
    */
    Fic_Asp=fopen(Fic_Cand,"r");
    for(i=0;i<Nb_Asp-1;i++)
    {
        nbmots=i;
        for(j=i+1;j<50;j++)
        {
            if(strcmp(T1[j],T1[nbmots])<0)
            {
                nbmots=j;
                strcpy(AIDE,T1[i]);
                strcpy(T1[i],T1[nbmots]);
                strcpy(T1[nbmots],AIDE);
            }
        }
    }

    for(i=0;i<Nb_Asp;i++)
    {
        printf(T[i]);
    }
    printf("\n");
    fclose(Fic_Asp);
    return 0;
}
