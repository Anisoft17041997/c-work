#include <stdio.h>
#include <stdlib.h>
/*Declarations globales*/
int Ind_sup,Ind_inf,p;

int main()
{

    /*Declaration des fonctions*/
    void Entree(int Tnb[], int N, int Ind_inf, int Ind_sup, int p);
    void Rech_divs(int Tnb[],int N,int Ind_inf, int Ind_sup, int p);
    void Rech_mult(int Tnb[], int N, int Ind_inf, int Ind_sup, int p);
    int Dim();

    /*Declaration des variables locales*/
    int Tnb[15];
    int N;
    int C;
    N=Dim();
    /*Appel a la fonction Entree*/
    Entree(Tnb,N,Ind_inf,Ind_sup,p);
    /*Saisie des indices*/

    //do
    //{
    do
    {
        printf("\nEntrer l'indice inferieur: ");
        C=scanf("%d",&Ind_inf);
        fflush(stdin);
    }
    while(Ind_inf<0 || Ind_inf>N || C==0);

    do
    {
        printf("\nEntrer l'indice superieur: ");
        C=scanf("%d",&Ind_sup);
        fflush(stdin);
    }
    while(Ind_sup<Ind_inf || Ind_sup>N || C==0);
    do
    {
        printf("\nEntrer l'entier dont on cherche les divideurs et multiples: ");
        C=scanf("%d",&p);
        fflush(stdin);
        if(p<0 || C==0)
        {
            system("color 40");
            printf("\a\aEntree correctement les donnees!");
        }
    }
    while(p<0 || C==0);

    //}
    //while(Ind_inf<0 || Ind_inf>N || C==0 || Ind_sup<Ind_inf || Ind_sup>N || p<0);
    Rech_divs(Tnb,N,Ind_inf,Ind_sup,p);
    Rech_mult(Tnb,N,Ind_inf,Ind_sup,p);
    main();
    return 0;
}
/*Definition des fonctions*/
int Dim()
{
    int N;
    int C;
    do
    {
        //system("cls");
        printf("\nEntrer la dimension du tableau[Max 15]: ");
        C=scanf("%d",&N);
        fflush(stdin);
    }
    while((N<=1 || N>15) || (C==0));
    return N;

}
void Entree(int Tnb[], int N, int Ind_inf, int Ind_sup, int p)
{
    int i;
    N=Dim();
    for(i=0; i<N; i++)
    {
        printf("\nEntrer le %d%s entier: ",i+1,(i==0)?"er":"eme");
        scanf("%d",&Tnb[i]);
    }


}
void Rech_divs(int Tnb[],int N,int Ind_inf, int Ind_sup, int p)
{
    int D[15];
    int i,j;
    /*Initialisation du tableau des diviseurs*/
    for(i=0; i<15; i++)
        D[i]=0;
    for(i=Ind_inf-1,j=0; i<Ind_sup; i++)
    {
        if(p%Tnb[i]==0)
        {
            D[j]=Tnb[i];
            j++;
        }
    }
    printf("\nLes diviseurs de %d sont: ",p);
    for (i=0; i<j; i++)
    {
        printf("%d\t",D[i]);
    }
}

void Rech_mult(int Tnb[],int N,int Ind_inf, int Ind_sup, int p)
{
    int M[15];
    int i,j;
    for(i=0; i<15; i++)
        M[i]=0;
    for(i=Ind_inf-1,j=0; i<Ind_sup; i++)
    {
        if(Tnb[i]%p==0)
        {
            M[i]=Tnb[i];
            j++;
        }
    }
    printf("\nLes multiples de %d sont: ",p);
    for (i=0; i<j; i++)
    {
        printf("%d\t",M[i]);
    }
}

