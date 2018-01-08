/*
    Name    :   FriendsNumbers.c
    Goal    :   Find if two integers are friend numbers or not
    Author  :   EHOLOUM Gnouleling
    Date    :   03/11/2016
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("mode 90");//Résolution d'ecran
    int sommeDiv(int nombre);//Prototype de fonction
    void listeDiv(int nombre);//Afficher la liste des diviseurs du nombre de l'argument
    int nb1,nb2;
    int C;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~        LES NOMBRES AMIS        ~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    do
    {
        printf("\nEntrer un entier strictement positif: ");
        C=scanf("%d",&nb1);
        fflush(stdin);
        if(C==0 || nb1<=0)
            printf("Erreur de saisie!");
    }
    while(C==0 || nb1<=0);
    do
    {
        printf("\nEntrer un entier strictement positif: ");
        scanf("%d",&nb2);
        fflush(stdin);
        if(C==0 ||nb2<=0)
            printf("Erreur de saisie!");
    }
    while(C==0 || nb2<=0 || nb1==nb2);
    printf("\n");
    listeDiv(nb1);
    printf("\n");
    listeDiv(nb2);
    printf("\n");
    if((sommeDiv(nb1)-nb1==nb2) && (sommeDiv(nb2)-nb2==nb1))
        printf("%d et %d sont des nombres amis",nb1,nb2);
    else
        printf("%d et %d ne sont pas des nombres amis",nb1,nb2);
    printf("\n");
    return 0;
}

void listeDiv(int nombre)
{
    int Tab_div[nombre/2];
    int i=0;
    int k=0;
    for(i=1; i<=nombre; i++)
    {
        if(nombre%i==0)
        {
            Tab_div[k]=i;
            k++;
        }
    }
    printf("\nListe des diviseurs de %d: \t",nombre);
    for(i=0; i<k; i++)
        printf("%d  ",Tab_div[i]);
    printf("\n");
}
int sommeDiv(int nombre)
{
    int i,s;
    for(i=1,s=0; i<=nombre; i++)
    {
        if(nombre%i==0)
            s=s+i;
    }
    return s;
}
//1er jeu d'essai : le fonctionnement normal
//2eme jeu d'essai : le fonctionnement anormal
