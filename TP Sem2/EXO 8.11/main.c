#include <stdio.h>
#include <string.h>
int main()
{
    /* Déclarations */
    char MOT[10][50]; /* tableau de 10 mots à trier */
    char AIDE[50]; /* chaîne d'aide pour la permutation */
    int I; /* rang à partir duquel MOT n'est pas trié */
    int J; /* indice courant */
    int PMOT; /* indique la position du prochain mot */
    /* dans la suite lexicographique. */
    /* Saisie des données */
    for (J=0; J<10; J++)
    {
        printf("Mot %d : ", J);
        gets(MOT[J]); /* ou : scanf ("%s\n", MOT[J]); */
    }
    /* Tri du tableau par sélection directe du */
    /* prochain mot dans la suite lexicographique. */
    for (I=0; I<9; I++)
    {
        /* Recherche du prochain mot à droite de A[I] */
        PMOT=I;
        for (J=I+1; J<10; J++)
            if (strcmp(MOT[J], MOT[PMOT]) < 0)
                PMOT=J;
        /* Echange des mots à l'aide de strcpy */
        strcpy(AIDE, MOT[I]);
        strcpy(MOT[I], MOT[PMOT]);
        strcpy(MOT[PMOT], AIDE);
    }
    /* Edition du résultat */
    printf("Tableau trie lexicographiquement :\n");
    for (J=0; J<10; J++)
        puts(MOT[J]); /* ou : printf("%s\n",MOT[J]); */
    printf("\n");
    return 0;
}
