/*  Name    : prime_numb1.c
    Goal    : print a certain number of prime numbers
    Author  : Prof of C course
    Date    : 2016/04/20
*/

//Declarations des bibliotheques

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
/*
#include <conio.h>
*/
int main (void)// void : Pas de parametres
{
    int nbPrime, //Nombre de nombres premiers
        cptPrime, //Compteur des nombres premiers
        okModulo, //Resultat du test de modulo
        cptTmp1, //Compteur des nombres a tester
        cptTmp2, //Compteur des diviseurs
        limit; //Nombre limite des diviseurs
    char reponse; //Reponse a la question pour reprendre

    do {
        system("color 20");
        system("CLS");
        printf("*** Program list of prime numbers ***");
        printf ("\nEnter number of prime number : ");
        scanf ("%d", &nbPrime);
        cptPrime = 0;
        cptTmp1 = 1;
        do
        {
            limit = sqrt(cptTmp1) + 1;
            cptTmp2 = 2;
            okModulo = 0;
            do
            {
                /*if (cptTmp1 % cptTmp2 == 0)
                {
                    okModulo = 1;
                }
                */
                okModulo!=(cptTmp1%cptTmp2);//Ca marche!
                cptTmp2++;
            }
            while(!okModulo && cptTmp2<=limit);
            if(!okModulo)
            {
                printf("\t%d", cptTmp1);
                cptPrime++;
            }
            cptTmp1++;
        }
        while (cptPrime<nbPrime);

        printf("\nVoulez-vous reprendre l'execution (O/N): ");
        do{
            reponse = toupper(getche());
            if(reponse!='O' || reponse!='N'){
                printf("\b");
            }
            fflush(stdin);
        }while (reponse!='O' && reponse!='N');

    }while (reponse=='O');
    return 0;
}
