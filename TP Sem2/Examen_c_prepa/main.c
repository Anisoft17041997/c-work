/*
    Name    :   Exam_prep.c
    Purpose :   Olympic's average
    Author  :   EHOLOUM Gauthier
    Date    :   11/07/2016
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>


int main()
{
    /*Declaration des prototypes*/
    float Maxi(float Tb_nb[], int N, int i);
    float Mini(float Tb_nb[], int N, int i);
    float Som(float Tb_nb[], int N, int i);
    float Moy_olymp(float Tb_nb[], int N, int i);

    /*Declaration des variables*/
    float Tb_nb[21];
    float moyenne;
    int N;//Dimension du tableau
    int i;//Indice courant
    int C;//Variable de controle
    char rep='N';

    /*Message d'acceuil*/
    printf("\n");
    printf("********************************************\n"
           "                                            \n"
           " La moyenne olympique d'une serie de nombres\n"
           "                                            \n"
           "********************************************\n");

    /*Saisie des nombres */
    do
    {
        printf("\nEntrer le nombre d'elements[5-20]: ");
        C=scanf("%d",&N);
        fflush(stdin);
    }
    while((N<5 || N>20) || (C==0));
    for (i=0; i<N; i++)
    {
        do
        {
            printf("\nEntrer le %d%s nombre: ",i+1,(i==0)?"er":"eme");
            C=scanf("%f",&Tb_nb[i]);
            fflush(stdin);
        }
        while(C==0);
        fflush(stdin);
    }
    /*La moyenne olympique*/
    moyenne=Moy_olymp(Tb_nb,N,i);
    printf("\nLa moyenne olympique est: %f",moyenne);
    printf("\nLa somme donne: %f",Som(Tb_nb,N,i));
    printf("\nLe maxi est: %f",Maxi(Tb_nb,N,i));
    printf("\nLe mini est: %f",Mini(Tb_nb,N,i));
    printf("\nRecommencer(O/N)?:");
    do
    {
        rep=toupper(getche());
        if(rep=='O')
        {
            system("cls");
            main();
        }
        else if(rep=='N')
            return 0;
        else
        {
            printf("\nSaisie erronee!\n");
            printf("Entrer la donnee: ");
        }
    }while(rep!='O' || rep!='N');
    return 0;
}

/*Definition de la fonction Maxi*/
float Maxi(float Tb_nb[], int N, int i)
{
    float max;
    max=Tb_nb[0];
    for(i=0; i<N; i++)
    {
        if(max<Tb_nb[i])
            max=Tb_nb[i];
    }
    return max;
}

/*Definition de la fonction Mini*/
float Mini(float Tb_nb[], int N,int i)
{
    float mini;
    mini=Tb_nb[0];
    for(i=0; i<N; i++)
    {
        if(mini>Tb_nb[i])
            mini=Tb_nb[i];
    }
    return mini;
}

/*Definition de la fonction Somme*/
float Som(float Tb_nb[], int N, int i)
{
    float somme;
    for(somme=0,i=0; i<N; i++)
    {
        somme+=Tb_nb[i];
    }
    return somme;
}

/*Definition de la  fonction Moyenne olympique*/
float Moy_olymp(float Tb_nb[], int N, int i)
{
    float moyenne;
    moyenne=(Som(Tb_nb,N,i)-(Maxi(Tb_nb,N,i)+Mini(Tb_nb,N,i)))/(N-2);
    return moyenne;
}
