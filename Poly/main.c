#include "poly.h"
#include "type_poly.h"
#include "lecture_polynome.h"
int main()
{
    polynome P = new_poly();
    //polynome P2 = new_poly();
    polynome P3 = NULL;

    int n,d,c;
    printf("\n\tGESTION DES POLYNOMES\n");
    printf("\n\tEntrer le nombre de monomes: ");
    scanf("%d",&n);

    do
    {
        printf("\n Entrer le coefficient: ");
        scanf("%d",&c);
        printf("\n Entrer le degre: ");
        scanf("%d",&d);
        P = constructeur(c,d,P);
        n--;
    }
    while(n>0);
    printf("\n");
    afficher(P);
    P3 = add_poly(P,P);
    afficher(P3);
    return 0;
}
