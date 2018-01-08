#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Etudiant{
    int NumMat;
    char Nom[30];
    char Prenom[50];
    char Filiere[40];
    };
    struct Etudiant Etud;
    FILE *F;
    char Nf[]="Liste Etudiants.txt";
    F=fopen(Nf,"w");
    int NbEtudiants;
    printf("Entrer le nombre d'%ctudiants: ",130);
    scanf("%d",&NbEtudiants);
    do
    {
        printf("\nEntrer le num%cro matricule: ",130);
        fflush(stdin);
        scanf("%d",&Etud.NumMat);
        printf("Entrer le nom: ");
        fflush(stdin);
        gets(Etud.Nom);
        printf("Entrer le pr%cnom: ",130);
        fflush(stdin);
        gets(Etud.Prenom);
        fflush(stdin);
        printf("Entrer la fili%cre: ",138);
        fflush(stdin);
        gets(Etud.Filiere);
        fprintf(F,"%d   %s  %s  %s\n",&Etud.NumMat,Etud.Nom,Etud.Prenom,Etud.Filiere);
        NbEtudiants--;
    }
    while(NbEtudiants>0);
    fclose(F);
    return 0;
}
//void Ajouter(char *Nfic);
