#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration des variables
    const int nbcand=4;//nombre de candidats
    char rep;//reponse la continuité
    int indElu;//indice de l'élu
    int i;//compteur d'aide
    unsigned int c;//controleur
    unsigned int tabScor[nbcand];//vecteur des scores
    float tabSuff[nbcand];//vecteur des suffrages
    float S;//score
    float total;//total des scores

    //GRANDE FONCTION
    //lecture des scores
    for(i=0; i<nbcand; i++)
    {
        do
        {
            printf("Entrer le score du candidat %d : ",i+1);
            c=scanf("%f" ,&S);
            if (c==0)
                printf("Entrer des nombres!");
        }
        while (c==0);
        tabScor[i]=S;
    }
    system("pause");

    //total des scores
    total=0;
    for (i=0; i<nbcand; i++)
        total+=tabScor[i];

    //Calcul des suffrages
    for (i=0; i<nbcand; i++)
    {
       tabSuff[i]=(tabScor[i]/total)*100;
    }

    //Recherche de l'élu
    indElu=-1;
    for (i=0; i<nbcand; i++)
    {
        if(tabSuff[i]>50)
            indElu=i;
    }
    //Premier résultat
    if (indElu!=-1)
    {
        for (i=0; i<nbcand; i++)
        {
            if (i==indElu)
            {
                printf("\nLe candidat %d est ELU", i+1);
            }
            else
            {
                printf("\nLe candidat %d est BATTU", i+1);
            }
        }
    }
    else//Second résultat
    {
        for (i=0; i<nbcand; i++)
        {
            if (tabSuff[i]>=12.5)
            {
                printf("\nLe candidat %d a droit au Second tour", i+1);
            }
            else
            {
                printf("\nLe candidat %d est Battu", i+1);
            }
        }
    }
    printf("\n");

    //boucle de continuité
    printf("\nY a t il d autres traitements (O/N)?: ");
    scanf("%c" ,&rep);
    if (rep=='o' || rep=='O')
        main();

return 0;
}
