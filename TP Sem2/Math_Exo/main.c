#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double A,B,tgA,v1,v2,ApuisB;
    printf("\nIntroduire la valeur pour A:\n");
    scanf("%lf",&A);
    printf("\nIntroduire la valeur pour B:\n");
    scanf("%lf",&B),
    ApuisB=pow(A,B);
    tgA=A/B;
    v1=floor(A/B);
    printf("\n%lf puissance %lf donne: %lf",A,B,ApuisB);
    printf("\nLa tangente de %lf donne: %lf",A,tgA);
    printf("\nla valeur arrondi en moins de %lf est %f",tgA,v1);
    return 0;
}
