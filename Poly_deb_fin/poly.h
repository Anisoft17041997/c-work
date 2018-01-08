#ifndef POLY_H_INCLUDED
#define POLY_H_INCLUDED
#include "type_poly.h"

polynome createPolynome();
polynome constructeur(int c, int d, polynome P);
int degre(polynome P);
polynome add_monome(monome *m1, monome *m2);
polynome add_poly(polynome P1, polynome P2);
polynome produit_monome(int x, int deg, polynome P);//middle function
polynome produit_polynome(polynome P1, polynome P2);
polynome tri_poly(polynome P);//polynomial sorting
void afficher(polynome P);//polynomial printing
polynome creerMonome(int c, int d);//monomial creating
int longueurPoly(polynome P);
int nb_monome(polynome P);

#endif // POLY_H_INCLUDED
