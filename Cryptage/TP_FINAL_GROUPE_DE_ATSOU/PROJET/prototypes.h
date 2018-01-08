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
/*Structure permettant de relier un etablissement et son effectif*/
typedef struct DonneEts Etablissement;
struct DonneEts
{
    char *Nom;
    int Effectif;
};
int Choix();
int ChoixModification();
double EntrerNote();
double MoyenneOlympique(FILE *Sortie,int NbrCandidat);
double MoyenneOlympique(FILE *Sortie,int NbrCandidat);
double RechercheNombreMax(double Tnb[],int N);
double RechercheNombreMin(double Tnb[],int N);
double CalculSomme(double Tnb[],int N);
double CalculMoyOlym(double Tnb[],int N);
void Menu();
void ModificationMenu();
void ActionReponse(int Rep,char *NomFichier,char *RetenusFichier,char *FichierNotes);
void InitialFichier(char *NomFichier,char *RetenusFichier,char *FichierNotes);
void Ajout(char *NomFichier);
void Modification(char *NomFichier);
void ModificationCandidat(Aspirant InfoAspirant,FILE * FichierAspirant);
void Supression(char *NomFichier);
void SaisieNote(char *NomFichier);
void RetientCandidats(char *RetenusFichier,char *FichierNotes);
void StaMoyenne(char *RetenusFichier,char *FichierNotes);
void FonctionAide();
void HistoSexe(char *RetenusFichier);
/*void HistoEtablissement(char *NomFichier,char *RetenusFichier);*/
void AfficheCandRetnus(char *RetenusFichier);
void AfficheCandNotes(char *FichierNotes);
void AfficheCandInscrits(char *NomFichier);

