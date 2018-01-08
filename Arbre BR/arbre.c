#include "arbre.h"

int is_Empty(tnode *T)//retourne 1 si vide 0 sinon
{
    int retour = (int)(T == NULL);
    return retour;
}

/* recover left tnode */
tnode *left(tnode *T)
{
    tnode *retour = T;
    if(is_Empty(T))
        retour = NULL;
    return retour->left;
}

/* recover right tnode */
tnode *right(tnode *T)
{
    tnode *retour = T;
    if(is_Empty(T))
        retour = NULL;
    return retour->right;
}

/* savoir si nous sommes sur une feuille */
int IsLeave(tnode *T)
{
    int retour = 0;
    if(is_Empty(T))
        retour = 0;
    else if (is_Empty(left(T)) && is_Empty(right(T)))
        retour = 1;
    else
        retour = 0;
    return retour;
}

/*  determiner si un node est un node intern */
int IsInternalNode(tnode *T)
{
    return !IsLeave(T);
}

/* return the max */
unsigned int maxi(unsigned a, unsigned b)
{
    return (a>b)? a:b;
}

/* calculate the height of the tnode */
unsigned int height(tnode *T)
{
    int retour;
    if (is_Empty(T))
        retour = 0;
    else
        retour = 1 + maxi(height(left(T)), height(right(T)));
    return retour;
}

/* Calculate the number of node */
unsigned int NbNode(tnode *T)
{
    unsigned int retour;
    if(is_Empty(T))
        retour = 0;
    else
        retour = 1 + NbNode(left(T)) + NbNode(right(T));
    return retour;
}

/* Calculate the number of leaves */
unsigned int NbLeaves(tnode *T)
{
    unsigned retour;
    if(is_Empty(T))
        retour = 0;
    else if (IsLeave(T))
        retour = 1;
    else
        retour = NbLeaves(left(T)) + NbLeaves(right(T));
    return retour;
}

/* Calculate the number of internal node*/
unsigned int NbInternalNode(tnode *T)
{
    unsigned int retour;
    if (is_Empty(T))
        retour = 0;
    else if(IsLeave(T))
        retour = 0;
    else
        retour = 1 + NbInternalNode(left(T)) + NbInternalNode(right(T));
    return retour;
}

/* Create tnode */
tnode *Create(int val, tnode *ls, tnode *rs)
{
    /*
        But :
        param :
        Date :
    */

    tnode *res;
    res = (tnode*)malloc(sizeof(tnode));

    if( res == NULL )
    {
        fprintf(stderr,"Impossible d'allouer le noeud");
        res  = NULL;
    }

    res->data = val;
    res->left = ls;
    res->right = rs;

    return res;
}

void addElt(tnode *arbre,int elt)
{
     if(arbre == NULL)
        arbre = Create(elt,NULL,NULL);
     else if (is_Empty(left(arbre)))
        arbre->left = Create(elt,NULL,NULL);
     else if (is_Empty(right(arbre)))
        arbre->right = Create(elt,NULL,NULL);
     else
        addElt(left(arbre),elt);
}

void insertBT(tnode *arbre, int elt)
{
    if(is_Empty(arbre) == 1)
        arbre = Create(elt,NULL,NULL);
    else
    {
        if(elt < arbre->data)
        {
            if(is_Empty(arbre->left))
               {
                   arbre->left = Create(elt,NULL,NULL);
               }else{
                   insertBT(left(arbre),elt);
               }
        }else{
            if(is_Empty(arbre->right)){
                arbre->right = Create(elt,NULL,NULL);
            }else
                insertBT(right(arbre),elt);
        }

    }
}

int Existe(tnode *arbre, int elt)
{
    int R = 0;
    if(is_Empty(arbre))
        R = 0;
    else if(arbre->data == elt)
        R = 1;
    else if(arbre->data > elt)
        R = Existe(left(arbre),elt);
    else
        R = Existe(right(arbre),elt);
    return R;
}

/* SUPPRESSION D'UN ARBRE*/
void Erase(tnode *arbre)
{
    tnode *ls = left(arbre);
    tnode *rs = right(arbre);

    if(!is_Empty(arbre))
    {
        Erase(ls);
        Erase(rs);
        free(arbre);
        arbre = NULL;
    }
}

/* Affichage */
void print_tnode_prefix(tnode *tr)
{
    if(!is_Empty(tr))
    {
        printf("(%d)",tr->data);
        print_tnode_prefix(left(tr));
        print_tnode_prefix(right(tr));
    }
}

void print_tnode_infix(tnode *tr)
{
    if(is_Empty(tr) == 1)
    {
        printf("\ntr != NULL");
        print_tnode_infix(left(tr));
        printf("(%d)\n",tr->data);
        print_tnode_infix(right(tr));
    }

    printf("\nArbre vide !\n");
}

void print_tnode_postfix(tnode *tr)
{
    if(is_Empty(tr))
    {
        print_tnode_postfix(left(tr));
        print_tnode_postfix(right(tr));
        printf("(%d)\n",tr->data);
    }
}

int plusGrdNiveau(tnode * arbre, int val)
{
    int n;
    if(arbre == NULL)
        n = 0;
    else if(arbre->left->data == val)
        n = height(arbre->left);
    else if(arbre->right->data == val)
        n = height(arbre->right);

    return n;
}
