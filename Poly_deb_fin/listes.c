#include "poly.h"

polynome createPolynome()
{
    polynome P;
    P.debut = NULL;
    P.fin = NULL;
    return P;
}

polynome constructeur(int c, int d, polynome P)//ajouter un monome a la tete du polynome
{
    monome *m = (monome*)malloc(sizeof(monome));

    if(m !=NULL)
    {
        if(P.taille == 0)
        {
            m->coef = c;
            m->degre = d;
            m->next = NULL;
            P.debut = m;
            P.fin = m;
            P.taille++;
        }
        else
        {
            m->coef = c;
            m->degre = d;
            m->next = P.debut;
            P.debut = m;
            P.taille++;
        }
    }

    return P;
}

void afficher(polynome P)
{
    int c,d;
    monome *courant;
    courant = P.debut;

    while(courant != NULL)
    {
        c = courant->coef;
        d = courant->degre;
        printf("%dX^%d",c,d);
        if(courant->next != NULL && courant->next->coef >= 0)
            printf("+");
        courant = courant->next;
    }
}

int degre(polynome P)
{
    monome *courant = P.debut;
    int maxdeg = 0;

    while(courant != NULL)
    {
        if(courant->degre > maxdeg)
            maxdeg = courant->degre;
        courant = courant->next;
    }

    return maxdeg;
}


polynome add_poly(polynome P1,polynome P2)
{
    monome *m1 = (monome*)malloc(sizeof(monome));
    monome *m2 = (monome*)malloc(sizeof(monome));
    polynome S = createPolynome();


    int SomCoef,d;
    m1 = P1.debut;
    m2 = P2.debut;

    if(m1 != NULL || m2 != NULL)
    {
        while(m1->next != NULL)
        {
            while(m2->next != NULL)
            {
                if(m1->degre == m2->degre)
                {
                    SomCoef = m1->coef + m2->coef;
                    d = m1->degre;
                    S = constructeur(SomCoef,d,S);
                }
                else
                {
                    S = constructeur(m2->coef, m2->degre, S);
                }
                m2 = m2->next;
            }
            S = constructeur(m1->coef, m1->degre, S);
            m1 = m1->next;
        }
    }
    return S;
}

/*polynome tri_poly(polynome P)
{
    int i,j;
    monome * tmp1 = P.debut;
    monome * tmp2;
    monome * current;

    for(i = 1; i<P.taille; i++)
    {
        tmp1 =
    }
    return NULL;
}*/

int nb_monome(polynome P)
{
    int nb;
    monome *courant = malloc(sizeof(*courant));
    courant = P.debut;
    if(courant == NULL)
        nb = 0;
    else
    {
        P.debut = courant->next;
        nb = 1 + nb_monome(P);
    }
    return nb;
}
