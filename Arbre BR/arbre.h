#ifndef ARBRE_H_INCLUDED
#define ARBRE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct node tnode;//tnode
struct node
{
    int data;
    tnode * left;
    tnode * right;
};

int is_Empty(tnode * T);//retourne 0 si vide 1 sinon
tnode * left(tnode * T);
tnode * right(tnode * T);
int IsLeave(tnode *T);
int IsInternalNode(tnode *T);
unsigned int maxi(unsigned a, unsigned b);
unsigned int height(tnode *T);
unsigned int NbNode(tnode *T);
unsigned int NbLeaves(tnode *T);
unsigned int NbInternalNode(tnode *T);
tnode *Create(int val, tnode *ls, tnode *rs);//CreateNode
void print_tnode_infix(tnode *tr);
void print_tnode_postfix(tnode *tr);
void print_tnode_prefix(tnode *tr);
void addElt(tnode *arbre,int elt);
void insertBT(tnode *arbre, int elt);
int Existe(tnode *arbre, int elt);
void Erase(tnode *arbre);
int plusGrdNiveau(tnode * arbre, int val);
#endif // ARBRE_H_INCLUDED

//Ranger
