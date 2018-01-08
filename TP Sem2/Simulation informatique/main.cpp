#include <iostream>

using namespace std;

int main()
{
    //Declaration des variables
    int I,J;//compteurs d'aide
    double matrice[6][5];
    double somme,total;

    /*Exercice 1.1 */

    /*Saisies des donnees*/
    cout<<"\nSIMULATION INFORMATIQUE\n";
    cout<<"\nSAISISSEZ VOS DONNEES\n"<<endl;
    for(I=0;I<4;I++)
    {
        for(J=0;J<3;J++)
        {
            cout<<"\nDonnees"<<" ["<<I+1<<"]"<<"["<<J+1<<"]"<<": ";
            cin>>matrice[I][J];
        }
    }
    /*Affichage du tableau*/
    cout<<"\n ### AFFICHAGE DU TABLEAU ###\n\n";
    for(I=0;I<4;I++)
    {
       for(J=0;J<3;J++)
        {
            cout<<matrice[I][J]<<"\t";
        }
       cout<<"\n";
    }
    /*Exercice 1.2*/
    /*Calcul de la somme des lignes*/

    for(I=0;I<4;I++)
    {
        somme=0;
        for(J=0;J<3;J++)
        {
            somme+=matrice[I][J];//Somme des lignes
        }
        matrice[I][3]=somme;
        matrice[I][4]=matrice[I][3]/4;
    }
    /*Somme des colonnes*/
        for(J=0;J<3;J++)
        {
            somme=0;
            for(I=0;I<4;I++)
            {
                somme+=matrice[I][J];//Somme des colonnes
            }
            matrice[4][I]=somme;
            matrice[5][I]=matrice[4][I]/3;
            total+=somme;
        }
    matrice[4][3]= total;
    /*Affichage des deux tableaux somme ligne et colonne*/
    cout<<"\nSomme ligne: \n";
    for (I=0;I<4;I++)
        cout<<matrice[I][3]<<"\t";
    cout<<"\nSomme colonne: \n";
    for (J=0;J<3;J++)
        matrice[4][J]=0;
    for (J=0;J<3;J++)
        cout<<matrice[4][J]<<"\t";
    //Affichage du tableau des sommes

    cout<<"\n\n ### TABLEAU DES SOMMES ### \n";
    for(I=0;I<4;I++)
    {
        for(J=0;J<5;J++)
        {
            cout<<matrice[I][J]<<"\t";
        }
        cout<<"\n";
    }
    //Affichage de la ligne
    for (I=0; I<30; I++)
    {
        cout<<"_";
    }
    cout<<"\n\n";
    //Affichage de la somme des colonnes
    for (I=0; I<5; I++)
    {
        cout<<matrice[4][I]<<"\t";
    }
    cout<<"\n";

return 0;
}
