#include "arbre.h"

int main()
{
    tnode *arbre = NULL;
    unsigned int a,b;
    arbre = Create(7,Create(4,Create(1,NULL,Create(3,NULL,NULL)),Create(6,NULL,NULL)),Create(16,NULL,NULL));
    print_tnode_prefix(arbre);
    printf("\nEntrer le nombre d'entiers a inserer: ");
    scanf("%ud",&a);
    printf("\nEntrer la valeur de la racine : ");
    scanf("%d",&b);
    arbre = Create(b,NULL,NULL);
    do
    {
        printf("\nEntrer un entier : ");
        scanf("%ud",&b);
        addElt(arbre,b);
        a--;
    }
    while(a>0);

    printf("\nEntrer la valeur : ");
    scanf("%d",&a);
    a = plusGrdNiveau(arbre,4);
//    printf("%d",)
    printf("Enumeration infix : \n");
    print_tnode_infix(arbre);
    printf("Enumeration prefix : \n");
    print_tnode_prefix(arbre);
    return 0;
}
