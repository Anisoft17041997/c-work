#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int value;
    struct Tree * tleft;
    struct Tree * tright;
    struct Tree * parent;
}Tree;

Tree *new_tree(int x);
void clean_tree(Tree *tr);
Tree *join_tree(Tree *left, Tree *right, int node);
void print_tree_prefix(Tree *tr);
int count_tree_nodes(Tree *tr);//Compter les noeuds d'un arbre
int plusGrdNiveau(Tree *tr, int valR);
int height(Tree *tr);
int maxi(int a, int b);

#endif // TREE_H_INCLUDED
