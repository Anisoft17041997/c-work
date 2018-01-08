/*
    Name:   Exo_calcul.c
    Purpose:Execice
    Author: EHOLOUM
    Date:   28/04/2016
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("COLOR 30");//Couleur de fond
    int a=0,b=0;//initialisation

    /*Saisie des valeurs*/
    printf("*****########******* Calcul *******########*******\n");
    printf("Veuillez entrer un nombre a:");
    scanf("%d",&a);
    printf("Veuillez entrer un nombre b:");
    scanf("%d",&b);

    /*Affichage des résultat*/
    printf("\nLa somme de %.d et %.d donne %d \n",a,b,a+b);
    printf("\n%d modulo %d donne %d \n",a,b,a%b);
    printf("\nLa difference entre %d et %d donne %d \n",a,b,a-b);
    printf("\nLa multiplication de %d par %d donne %d\n",a,b,a*b);
    /*Condition sur le dénomunateur*/

    if(b==0)
        printf("\nLa division de %d par %d est impossible\n",a,b);
    else
        printf("\nLa division de %d par %d donne %f\n",a,b,(float)(a/b));
    /*Fin du programme*/
    return 0;
}
