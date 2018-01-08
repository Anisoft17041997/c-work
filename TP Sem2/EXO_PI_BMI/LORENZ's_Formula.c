/*
    Name    :   LORENZ's_Formula.c
    Purpose :   To calculate the ideal weight
                of person by using alternative and repetitive structure
    Author  :   EHOLOUM Gauthier
    Date    :   01/06/2016
*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


int main()
{
    /*D�clarations*/
    char buff[90];
    char sexe;//Le sexe de la personne
    char rep;//Reponse permettant de reprendre ou pas
    float PI;//Le poids ideal de la personne
    float taille;//La taille de la personne
    float poids;//Le poids de la personne
    float BMI;//Le Body Mass Index
    float C1,C2;//controleurs de type

    /*Message d'accueil*/
    CharToOem("D�sol�\n",buff);
    printf("%s",buff);
    printf("\nCALCUL DU POIDS IDEAL D'UNE PERSONNE ");
    printf("ET DE L'INDICATEUR D'OBESITE\n");

    do      //Contr�le pour les �ssais cons�cutifs
    {
        do   //Contr�le pour le sexe
        {
            printf("\nEntrer le sexe de la personne(M/F): ");
            sexe=toupper(getche());
            fflush(stdin);//Pour lib�rer le buffer(M�moire tampon)
        }
        while((!sexe) || (sexe!='M' && sexe!='m' && sexe!='F' && sexe!='f'));  //Conditions

        do  //Contr�le pour la taille(son type)
        {
            printf("\nEntrer la taille de la personne(cm): ");
            C1=scanf("%f",&taille);
            fflush(stdin);
        }
        while (C1==0 || taille<=0 || taille>=300);

        do //Contr�le pour le poids(Valeur min valeur max)
        {
            printf("\nEntrer le poids de la personne(kg): ");
            C2=scanf("%f",&poids);
            fflush(stdin);
        }
        while(C2==0 || poids<=0 || poids>=300);

        if (sexe=='M' || sexe=='m')
        {
            PI=(taille-100)-(taille-150)/4;
            printf("\nLe poids ideal de la personne est: %f kg",PI);
        }
        else
        {
            PI=(taille-100)-(taille-120)/4;
            printf("\nLe poids ideal est: %f kg",PI);
        }

        BMI=poids/((taille/100)*(taille/100));

        printf("\nL'indice d'obesite est: %f",BMI);

        if (BMI<=27)
        {
            printf("\nPersonne normale.");
        }
        else if ((BMI>27) && (BMI<=32))
            printf("\nPersonne obese");
        else
            printf("\nPersonne malade");
        printf("\nVoullez-vous recommencer(O/N)?: ");
        do
        {
            rep=toupper(getche());
            if (rep!='O' || rep!='N')
            {
                printf("\b");//Erreur de saisie
            }
            fflush(stdin);
        }
        while(rep!='O' && rep!='N');

    }
    while(rep=='O');
    return 0;
}
