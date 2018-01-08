#include <stdio.h>
#include <stdlib.h>
#include "Listes1.h"
int main()
{
    char choix;
    char *nom;
    Liste *liste;
    //Element *current;

    if((liste = (Liste*)malloc(sizeof(Liste)))==NULL)
        return -1;
    if((nom = (char*)malloc(50))==NULL)
        return -1;
    //current = NULL;
    choix = 'o';

    initialiser(liste);
    int pos,k;
    while(choix != 7){
        choix = menu(liste,&k);
        switch(choix)
        {
        case 1:
            system("color 1E");
            printf("Entrer un element: ");
            scanf("%s", nom);
            getchar();
            if(liste->taille == 0)
                insertIntoEmptyList(liste,nom);
            else
                insertIntoList(liste,nom,pos);
            printf("%d elements: debut=%s, fin=%s\n",liste->taille,liste->top->data,liste->bottom->data);
            affiche(liste);
            break;
        case 2:
            system("color 2A");
            printf("Entrer un element: ");
            scanf("%s", nom);
            getchar();
            insertIntoEndList(liste,liste->bottom,nom);
            printf("%d elements: debut=%s, fin=%s\n",liste->taille,liste->top->data,liste->bottom->data);
            affiche(liste);
            break;
        case 3:
            printf("Entrer un element: ");
            scanf("%s", nom);
            getchar();
            do{
                printf("Entrer la position: ");
                scanf("%d",&pos);
            }while(pos<1 || pos>liste->taille);
            getchar();
            if(liste->taille == 1 || pos == liste->taille)
            {
                k = 1;
                printf("Insertion echouee.Utiliser le menu {1|2}\n");
                break;
            }
            insertIntoList(liste,nom,pos);
            printf("%d elements: debut=%s, fin=%s\n",liste->taille,liste->top->data,liste->bottom->data);
            affiche(liste);
            break;
        case 4:
            supp_Top(liste);
            if(liste->taille != 0)
                printf("%d elements: debut=%s, fin=%s\n",liste->taille,liste->top->data,liste->bottom->data);
            else
                printf("\nLa liste est vide\n");
            affiche(liste);
        case 5:
            do
            {
                printf("Entrer la position: ");
                scanf("%d",&pos);
            }while(pos<1 || pos>liste->taille);
            getchar();
            supp_Into_Liste(liste,pos);
            if(liste->taille != 0)
                printf("%d elements: debut=%s, fin=%s\n",liste->taille,liste->top->data,liste->bottom->data);
            else
                printf("La liste est vide!\n");
            affiche(liste);
            break;
        }
    }
    return 0;
}
