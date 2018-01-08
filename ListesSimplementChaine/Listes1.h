#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef LISTES1_H_INCLUDED
#define LISTES1_H_INCLUDED

/*Definition d'un element de la liste*/
typedef struct ElementListe Element;
struct ElementListe{
    char *data;//variable
    Element *next;//pointeur vers l'element suivant
};

/*Definition de la structure de la liste*/
typedef struct ListeRepere Liste;
struct ListeRepere{
    Element *top;//debut: @ du premier element de la liste
    Element *bottom;//fin: @ du dernier element de la liste
    int taille;//nombre d'elements de la liste
};

/*INSERTION*/
void initialiser(Liste *liste);
int insertIntoEmptyList(Liste *liste, char *data);
int insertIntoTopList(Liste *liste, char *data);
int insertIntoEndList(Liste *liste, Element *current, char *data);
int insertIntoList(Liste *liste, char *data, int pos);

/*SUPPRESSION*/
int supp_Top(Liste *liste);
int supp_Into_Liste(Liste *liste, int pos);

/*AUTHERS*/
int menu(Liste *liste, int *k);
void affiche(Liste *liste);
void detruire(Liste *liste);


#endif // LISTES1_H_INCLUDED
