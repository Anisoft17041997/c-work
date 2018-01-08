#include "Listes1.h"

/*Initialisation de la liste*/
void initialiser(Liste *liste)
{
    liste->top = NULL;
    liste->bottom = NULL;
    liste->taille = 0;
}

/*Insertion dans une liste vide*/
int insertIntoEmptyList(Liste *liste, char *data)
{
    Element *newElt;
    if((newElt = (Element*)malloc(sizeof(Element)))==NULL)
        return -1;
    if((newElt->data = (char*)malloc(50*sizeof(char)))==NULL)
        return -1;
    strcpy(newElt->data,data);
    newElt->next = NULL;
    liste->top = newElt;
    liste->bottom = newElt;
    liste->taille++;
    return 0;
}

/*Insertion au debut de la liste*/
int insertIntoTopList(Liste *liste, char *data)
{
    Element *newElt;
    if((newElt = (Element*)malloc(sizeof(Element)))==NULL)
        return -1;
    if((newElt->data = (char*)malloc(50*sizeof(char)))==NULL)
        return -1;
    strcpy(newElt->data,data);
    newElt->next = liste->top;
    liste->top = newElt;
    liste->taille++;
    return 0;
}
/*Insertion a la fin de la liste*/
int insertIntoEndList(Liste *liste, Element *current, char *data)
{
    Element *newElt;
    if((newElt = (Element*)malloc(sizeof(Element)))==NULL)
        return -1;
    if((newElt->data = (char*)malloc(50*sizeof(char)))==NULL)
        return -1;
    strcpy(newElt->data,data);
    current->next = newElt;
    newElt->next = NULL;
    liste->bottom = newElt;
    liste->taille++;
    return 0;
}
/*Insertion a une position demande*/
int insertIntoList(Liste *liste, char *data, int pos)
{
    if(liste->taille < 2)
        return -1;
    if(pos < 1 || pos >= liste->taille)
        return -1;
    Element *current;
    Element *newElt;

    int i;
    if((newElt = (Element*)malloc(sizeof(Element)))==NULL)
        return -1;
    if((newElt->data = (char*)malloc(50*sizeof(char)))==NULL)
        return -1;
    current = liste->top;
    for(i = 1; i<pos; ++i)
        current = current->next;
    if(current->next == NULL)
        return -1;
    strcpy(newElt->data, data);
    newElt->next = current->next;
    current->next = newElt;
    return 0;
}

/*Suppression au debut de la liste*/
int supp_Top(Liste *liste)
{
    if(liste->taille == 0)
        return -1;
    Element *supp_element;
    supp_element = liste->top;
    liste->top = liste->top->next;
    if(liste->taille == 1)
        liste->bottom = NULL;
    free(supp_element->data);
    free(supp_element);
    liste->taille--;
    return 0;
}

/*Suppression d'un element apres la position demande*/
int supp_Into_Liste(Liste *liste, int pos)
{
    if(liste->taille <= 1 || pos < 1 || pos >= liste->taille)
        return -1;
    int i;
    Element *current;
    Element *supp_element;
    current = liste->top;

    for(i = 1; i<pos; ++i)
        current = current->next;
    supp_element = current->next;
    current->next = current->next->next;

    if(current->next == NULL)
        liste->bottom = current;
    free(supp_element->data);
    free(supp_element);
    liste->taille--;
    return 0;
}

/*Affichage de la liste*/
void affiche(Liste *liste)
{
    Element *current;
    current = liste->top;
    while(current != NULL)
    {
        printf("%p - %s\n",current,current->data);
        current = current->next;
    }
}

/*Destruction de la liste*/
void detruire(Liste *liste)
{
    while(liste->taille > 0)
    {
        supp_Top(liste);
    }
}

/*Menu*/
int menu(Liste *liste, int *k)
{
    int choix;
    printf("       Menu      \n");
    if(liste->taille == 0)
    {
        system("color 4F");
        printf("1. Ajout du 1er element\n");
        printf("2. Quitter\n");
    }
    else if(liste->taille == 1 || *k == 1)
    {
        system("color 2E");
        printf("1. Ajout au debut de la liste\n");
        printf("2. Ajout a la fin de la liste\n");
        printf("4. Suppression au debut de la liste\n");
        printf("6. Detruire la liste\n");
        printf("7. Quitter\n");

    }
    else{
            system("color 1E");
        printf("1. Ajout au debut de la liste\n");
        printf("2. Ajout a la fin de la liste\n");
        printf("3. Ajout apres la position specifie\n");
        printf("4. Suppression au debut de la liste\n");
        printf("5. Suppression apres la position specifie\n");
        printf("6. Detruire la liste\n");
        printf("7. Quitter\n");
    }
    printf("\n\nFaites votre choix: ");
    scanf("%d",&choix);
    getchar();
    if(liste->taille == 0 && choix==2)
        choix = 7;
    return choix;
}
