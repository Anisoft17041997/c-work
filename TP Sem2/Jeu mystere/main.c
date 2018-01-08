/*
    Name:       Jeu_mystere.c
    Purpose:    Find a mystery number in an array
    Author(s):  EHOLOUM Gnouleling Gauthier
    Date:       31/05/2016
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    /*Les declarations*/
    int nbmyst1=0;//Mystery number1
    int nbentre=0;//Enter number1
    int mode;//The level
    int nbent2=0;//Enter number2
    int nbmyst2;//Mystery number2
    int choix;//The user choice
    int nbcoups=0;//The try number
    int C1;
    const long Max1=100,Min=1,Max2=1000,Max3=10000;
    srand(time(NULL));//Generation of random number
    nbmyst1=(rand()%(Max1-Min +1))+Min;/*Generation of random number*/
    system("color 1B");
    printf("********************************\n");
    printf("******        MENU        ******\n");
    printf("********************************\n");
    printf("\n1.Mode un joueur\n");
    printf("\n2.Mode deux joueurs\n");
    printf("\n3.Quitter\n");
    printf("\nEntrer votre choix: ");
    scanf("%d",&mode);
    switch(mode)
    {
    case 1:
        printf("\nNiveau-1\n");
        printf("\nNiveau-2\n");
        printf("\nNiveau-3\n");
        do
        {
            printf("\nEntrer votre choix: ");
            C1=scanf("%d",&choix);
        } while((C1==0) || (choix!=1 && choix!=2 && choix!=3));

        switch(choix)
        {
        case 1:
            nbmyst1=(rand()%(Max1-Min +1))+Min;
        do{
        printf("Quel est le nombre mystere?: ");
        scanf("%d",&nbentre);

        if(nbmyst1>nbentre)
            printf("Plus grand\n");
        else if(nbmyst1<nbentre)
            printf("Plus petit\n");
        else
            printf("Bravo vous avez trouve le nombre mystere!\n");
            nbcoups++;
          }while(nbentre!=nbmyst1);

          printf("\nVous avez trouver le nombre mystere en %d coups\n",nbcoups);
          system("PAUSE");
          main(0,0);
        break;
        case 2:
            nbcoups=0;
            nbmyst1=(rand()%(Max2-Min +1))+Min;
            do
            {
                printf("Quel est le nombre mystere?: ");
                scanf("%d",&nbentre);

                if(nbmyst1>nbentre)
                printf("Plus grand\n");
                else if(nbmyst1<nbentre)
                printf("Plus petit\n");
                else
                printf("Bravo vous avez trouve le nombre mystere!\n");
                nbcoups++;
            }while(nbentre!=nbmyst1);
          printf("\nVous avez trouver le nombre mystere en %d coups\n",nbcoups);
          system("PAUSE");
          main(argc,argv);
        break;
        case 3:
            nbcoups=0;
            nbmyst1=(rand()%(Max3-Min +1))+Min;
            do
            {
                printf("Quel est le nombre mystere?: ");
                scanf("%d",&nbentre);

                if(nbmyst1>nbentre)
                printf("Plus grand\n");
                else if(nbmyst1<nbentre)
                printf("Plus petit\n");
                else
                printf("Bravo vous avez trouve le nombre mystere!\n");
                nbcoups++;
            }while(nbentre!=nbmyst1);

          printf("\nVous avez trouver le nombre mystere en %d coups\n",nbcoups);
        system("PAUSE");
        main(argc,argv);
            }


        do
        {
            printf("\nEntrer un nombre: ");
            scanf("%d",&nbent2);
            if (nbmyst2>nbent2)
            printf("Plus grand\n");
        else if (nbmyst2<nbent2)
            printf("\nPlus petit");
        else
            printf("Bravo vous avez trouve le nombre mystere \n");
            nbcoups++;
        }while(nbmyst2!=nbent2);
        printf("\nVous avez trouver le nombre mystere en %d coups\n",nbcoups);
       system("Pause");
    case 3:
        printf("\nAu revoir!");
        fflush(stdin);
    }

    return 0;
}
