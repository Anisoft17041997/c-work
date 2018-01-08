#include "type_poly.h"
#include "poly.h"
int main()
{
    polynome P1,P2;
    int n,d,c,choix;
    printf("\n\tGESTION DES POLYNOMES\n");
    printf("\n\tMENU\n");
    printf("\n 1 - Saisir un polynome\n");
    printf("\n 2 - Saisir deux polynome\n");
    printf("\n Entrer votre choix: ");
    scanf("%d",&choix);
    switch(choix)
    {
    case 1:
        printf("\n Entrer le nombre de monomes: ");
        scanf("%d",&n);
        P1 = createPolynome();
        while(n>0)
        {
            printf("\n Entrer le coefficient: ");
            scanf("%d",&c);
            printf("\n Entrer le degre: ");
            scanf("%d",&d);
            P1 = constructeur(c,d,P1);
            n--;
        }
        printf("\n");
        printf("\n Le degre du polynome est donc: %d\n",degre(P1));
        printf("\n");
        afficher(P1);
        printf("\nNb de monomes : %d\n",nb_monome(P1));
        afficher(P1);
        break;
    case 2:
        printf("\n Saisie du premier polynome \n");
        printf("\n Entrer le nombre de monomes: ");
        scanf("%d",&n);
        P1 = createPolynome();
        while(n>0)
        {
            printf("\n Entrer le coefficient: ");
            scanf("%d",&c);
            printf("\n Entrer le degre: ");
            scanf("%d",&d);
            P1 = constructeur(c,d,P1);
            n--;
        }

        printf("\n Saisie du deuxieme polynome\n");
        printf("\n\n Entrer le nombre de monomes: ");
        scanf("%d",&n);
        P2 = createPolynome();
        while(n>0)
        {
            printf("\n Entrer le coefficient: ");
            scanf("%d",&c);
            printf("\n Entrer le degre: ");
            scanf("%d",&d);
            P2 = constructeur(c,d,P2);
            n--;
        }
        printf("\n");
        printf("\nP1 = ");
        afficher(P1);
        printf("\n");
        printf("\nP2 = ");
        afficher(P2);
        printf("\nP1+P2 = ");
        P1 = add_poly(P1,P2);
        printf(" ");
        afficher(P1);
    }

    return 0;
}
