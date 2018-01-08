#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <math.h>
/*Structure pour un enrégistrement*/
typedef struct Enregistrement Aspirant;
struct Enregistrement
{
    char Nom[20];
    char Prenoms[40];
    char Sexe;
    char Ets[50];
    char Niveau[10];
    double Note;
};
void Menu();
void ModificationMenu();
int Choix();
int ChoixModification();
void ActionReponse(int Rep,char *NomFichier,char *RetenusFichier,char *FichierNotes);
void InitialFichier(char *NomFichier);
void Ajout(char *NomFichier);
void Modification(char *NomFichier);
void ModificationCandidat(Aspirant InfoAspirant,FILE * FichierAspirant);
void Supression(char *NomFichier);
void SaisieNote(char *NomFichier);
double EntrerNote();
void RetientCandidats(char *RetenusFichier,char *FichierNotes);
double MoyenneOlympique(FILE *Sortie,int NbrCandidat);
double RechercheNombreMax(double Tnb[],int N);
double RechercheNombreMin(double Tnb[],int N);
double CalculSomme(double Tnb[],int N);
double CalculMoyOlym(double Tnb[],int N);
void StaParMention(char *RetenusFichier, struct Enregistrement Aspirant);
