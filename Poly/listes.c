#include "type_poly.h"

polynome new_poly()//creer un ploynome vide
{
    return NULL;
}

Bool is_null_poly(polynome P)//true; si ploynome null false sinon
{
    if(P == NULL)
        return true;
    return false;
}

polynome creerMonome(int c, int d)//creer un monome
{
    monome *P = (monome*)malloc(sizeof(monome));
    monome *retour;
    if(P == NULL)
    {
        /*fprintf(stderr,"Allocation echouee.\n");
        exit(EXIT_FAILURE);*/
        retour = NULL;
    }

    P->coef = c;
    P->degre = d;
    P->next = NULL;

    retour = P;
    return retour;
}

polynome constructeur(int c, int d, polynome P)//ajouter un monome a la tete du polynome
{
    //monome *m = (monome*)malloc(sizeof(monome));
    monome *retour;


    /*if(m == NULL)
    {
        fprintf(stderr,"Allocation echouee.\n");
        exit(EXIT_FAILURE);
        retour = NULL;
    }

    if(is_null_poly(P))
    {
        m->coef = c;
        m->degre = d;
        m->next = NULL;
        retour = m;
    }
    else
    {
        m->coef = c;
        m->degre = d;
        m->next = P;
        retour = m;
    }*/
    if ( P == NULL )
        return creerMonome(c,d);
    else
    {
        if ( d > P->degre )
        {
            monome * NP = creerMonome( c, d );
            NP->next = P;
            retour = NP;
        }
        else
        {
            monome * R = P;
            while ( R->next != NULL && R->next->degre > d )
                R = R->next;
            if (R->next != NULL && R->next->degre == d )
                R->next->coef += c;
            else
            {
                monome * P = creerMonome(c, d);
                P->next = R->next;
                R->next = P;
            }
            retour = R;
        }
    }
    return retour;
}

polynome copierPolynome(polynome *monPoly )
{
    polynome *copie = NULL, *R = monPoly;
    while ( R != NULL )
    {
        copie = ajouterMonome( copie, R->coef, R->exp );
        R = R->next;
    }
    return copie;
}
polynome tri_poly(polynome P)//Trier un polynome: par ordre croissant
{
    polynome tmp1,tmp2,tmp3;
    int miniCoef;
    int miniDegre;

    int tmpCoef;
    int tmpDegre;

    tmp1 = malloc(sizeof(polynome));
    tmp2 = malloc(sizeof(polynome));
    tmp3 = malloc(sizeof(polynome));

    if(is_null_poly(P))
    {
        fprintf(stderr,"Rien a trier le polynome est nul");
        exit(EXIT_FAILURE);
    }

    tmp1 = P;

    while(tmp1->next != NULL)
    {
        miniCoef = tmp1->coef;
        miniDegre = tmp1->degre;
        tmp2 = tmp1->next;

        while(tmp2 != NULL)
        {
            if(miniDegre > tmp2->degre)
            {
                tmp3 = tmp2;
                miniCoef = tmp3->coef;
                miniDegre = tmp3->degre;
            }

            tmp2 = tmp2->next;
        }

        tmpCoef = tmp1->coef;
        tmpDegre = tmp1->degre;

        tmp1->coef = miniCoef;
        tmp1->degre = miniDegre;

        miniCoef = tmpCoef;
        miniDegre = tmpDegre;

        tmp3->coef = tmpCoef;
        tmp3->degre = miniDegre;

        tmp1 = tmp1->next;
    }

    return P;
}

void afficher(polynome P)//afficher le polynome passer en argument
{
    //int longueurPoly(polynome P);
    int c,d;
    if(is_null_poly(P))
    {
        printf("P(x) = 0\n");
    }

    printf("\n");
    P = tri_poly(P);
    while(P != NULL)
    {
        c = P->coef;
        d = P->degre;
        printf("%dX^%d",c,d);
        if(P->next != NULL && P->next->coef >= 0)
            printf("+");
        P = P->next;
    }
    printf("\n\n");
}


int longueurPoly(polynome P)//return la longueur du polynome
{
    int cpt = 0;
    if(is_null_poly(P))
        cpt = 0;
    while(P->next != NULL)
    {
        ++cpt;
        P = P->next;
    }

    return cpt;
}

int degre(polynome P)//degree du polynome
{
    polynome I;
    int maxdeg;

    maxdeg = P->degre;

    for(I = P; I != NULL; I = I->next)
    {
        if(maxdeg < I->degre)
            maxdeg = I->degre;
    }

    return maxdeg;
}

polynome add_poly(polynome P1, polynome P2)
{
    polynome S = NULL,I,J;
    //monome *m = (monome*)malloc(sizeof(monome));
    int c,d;
    for(I = P1; I != NULL; I = I->next)
    {
        for(J = P2; J != NULL; J = J->next)
        {
            if(I->degre == J->degre)
            {
                c = I->coef + J->coef;
                d = I->degre;
                S = constructeur(c,d,S);
            }
            else
            {
                S = constructeur(J->coef,J->degre,P2);
                S = constructeur(I->coef,I->degre,P1);
            }
            S = tri_poly(S);
        }

    }

    return S;
}

polynome produit_monome(int x, int deg, polynome P)
{
    return NULL;
}

polynome produit_polynome(polynome P1, polynome P2)
{

    return NULL;
}

polynome add_poly(polynome P1, polynome P2);

{
    polynome * somme = copierPolynome( monPoly1 ), * R = monPoly2;
    while ( R != NULL )
    {
        somme = ajouterMonome( somme, R->coef, R->exp );
        R = R->suivant;
    }
    return somme;
}
