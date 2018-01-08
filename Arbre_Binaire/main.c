#include "tree.h"

int main()
{
//    Tree *arbre = join_tree(new_tree(2),new_tree(4),6);
    Tree *arbre;
    //= join_tree(join_tree(new_tree(8),new_tree(3),2),new_tree(4),6);
    int a,b,x,y;

    printf("Entrer le nombre d'elements : ");
    scanf("%d",&a);

    do{
    	printf("Entrer un entier : ");
    	scanf("%d",&b);
    	printf("Entrer un entier : ");
    	scanf("%d",&x);
    	printf("Entrer un entier : ");
    	scanf("%d",&y);

    	arbre = join_tree(new_tree(x),new_tree(y),b);
    	a--;
    }while(a>0);
    print_tree_prefix(arbre);
    printf("Le nombre de noeuds est %d",count_tree_nodes(arbre));
//    clean_tree(arbre);

    return 0;
}
