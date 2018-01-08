#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(void)
{
    char mot1[8];
    //Tableau où le mot donné par l'utilisateur est rangé
    char permut_tab[8];
    //Tableau où le mot permuté est rangé
    //char permut_tab2[8];
    //Tableau où le mot initial est rangé
    char matrice[7][7];
    //Matrice permettant de permuter le mot
    //char matrice1[7][7];
    //Matrice permettant de retrouver le mot initial
    int k=0;
    //Reel permettant d'incrémenter les tableaux où le mot est codé
    int i=0;
    //Reel permettant de changer de ligne et de colonnes dans la matrice
    cout << "Entrer un mot de 7 lettres: " << endl;
    cin>>mot1;
    cout<<"Le nombre de lettre est"<<strlen(mot1)<<endl;
    for(i=0;i<8;i++)
    permut_tab[i]=0;
    while(k<(int)strlen(mot1)){
        permut_tab[k]=mot1[0]*matrice[0][k];
        /*initialise la premiere case du tableau permut_tab par la multiplication
        entre la premiere lettre du mot et le mot present dans la matrice ligne 0  et colonne O
        de la matrice*/
        i=1;
        while(i<(int)strlen(mot1)){
            permut_tab[k]=permut_tab[k]+mot1[i]*matrice[i][k];
            //Incremente le tableau permut_tab par la multiplication des lettres du mot et la matrice
            i++;
        }
        k++;
    }
    permut_tab[k]='\0';
    cout<<"Le mot permute est"<<permut_tab<<endl;

    return 0;
}
