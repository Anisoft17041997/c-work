#include "tree.h"

Tree * new_tree(int x)
{
    Tree * tr = (Tree*)malloc(sizeof(Tree));

    if(tr == NULL)
    {
        fprintf(stderr,"Erreur allocation memoire!\n");
        exit(EXIT_FAILURE);
    }
    tr->value = x;
    tr->tleft = NULL;
    tr->tright = NULL;
    tr->parent = NULL;
    //Aide pour developpeur
    printf("Creation de %d\n",tr->value);
    return tr;
}

void clean_tree(Tree *tr)
{
    if(tr == NULL)
        return;
    //Aide pour developpeur
    printf("Suppression de %d\n",tr->value);
    clean_tree(tr->tleft);
    clean_tree(tr->tright);

    free(tr);
}

Tree *join_tree(Tree *left, Tree *right, int node)
{
    Tree *tr = new_tree(node);
    tr->tleft = left;
    tr->tright = right;

    if(left != NULL)
        left->parent = tr;
    if(right != NULL)
        right->parent = tr;
    return tr;
}

void print_tree_prefix(Tree *tr)
{
    if(tr == NULL)
        return;
    if(tr->parent != NULL)
        printf("(%d) -> (%d)\n",tr->parent->value,tr->value);
    else
        printf("(%d)\n",tr->value);
    if(tr->tleft != NULL)
        print_tree_prefix(tr->tleft);
    if(tr->tright != NULL)
        print_tree_prefix(tr->tright);
}

int count_tree_nodes(Tree *tr)
{
    if(tr == NULL)
        return 0;
    return (1 + count_tree_nodes(tr->tleft)+count_tree_nodes(tr->tright));
}

int maxi(int a, int b)
{
    return (a>b) ? a : b;
}

int height(Tree *tr)
{
    int r;
    if(tr == NULL)
        r = 0;
    else
        r = 1 + maxi(height(tr->tleft),height(tr->tright));

    return r;
}

int plusGrdNiveau(Tree * tr, int valR)
{
    int n;
    if(tr == NULL)
        n = 0;
    else if(tr->tleft->value == valR)
        n = height(tr->tleft);
    else if(tr->tright->value == valR)
        n = height(tr->tright);
    return n;
}
