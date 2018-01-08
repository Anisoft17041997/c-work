/*
    Name:       Riddle_Game.c
    Purpose:    Find a mystery number in an array
    Author(s):  EHOLOUM Gnouleling Gauthier
    Date:       31/05/2016
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    /*Declarations*/
    int nbmyst=0;//Mystery number1
    int nbuser=0;//Enter number1
//    int mode;//The level
//    int choix;//The user choice
    int nbcoups=0;//The try number
    //int C1;
    long Max;
    int Min=1;
    srand(time(NULL));//Initialization of generator of random number
    nbmyst=(rand()%(Max-Min +1))+Min;/*Generation of random number*/
    system("color 1B");
    printf("********************************\n");
    printf("******        MENU        ******\n");
    printf("********************************\n");
    printf("Entrer la borne sup: ");
    scanf("%ld",&Max);
    nbmyst = Min+(rand()%(Max-Min +1));
    do
    {
        printf("Quel est le nombre mystere?: ");
        scanf("%d",&nbmyst);

        if(nbmyst>nbuser)
            printf("Plus grand\n");
        else if(nbmyst<nbuser)
            printf("Plus petit\n");
        else
            printf("Bravo vous avez trouve le nombre mystere!\n");
        nbcoups++;
    }
    while(nbuser!=nbmyst);
    printf("\nVous avez trouver le nombre mystere en %d essais\n",nbcoups);

return 0;
}
