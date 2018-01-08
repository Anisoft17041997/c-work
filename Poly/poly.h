#ifndef POLY_H_INCLUDED
#define POLY_H_INCLUDED
#include "type_poly.h"

  ///////////////////////////////////////////////////
 ////         PROTOTYPES DE FONCTIONS           ////
///////////////////////////////////////////////////

polynome new_poly();//perso
Bool is_null_poly(polynome P);//perso
polynome constructeur(int c, int d, polynome P);
polynome copierPolynome(polynome *monPoly );
int degre(polynome P);
polynome add_poly(polynome P1, polynome P2);
polynome produit_monome(int x, int deg, polynome P);//middle function
polynome produit_polynome(polynome P1, polynome P2);
polynome tri_poly(polynome P);//polynomial sorting
void afficher(polynome P);//polynomial printing
polynome creerMonome(int c, int d);//monomial creating
int longueurPoly(polynome P);

#endif // POLY_H_INCLUDED
