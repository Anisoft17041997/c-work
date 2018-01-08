#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int typ;
    float a,b,c,d;
    do
    {
        printf("Entrer le type d'equation a resoudre: \n1) Equation du 1er degre \n2) Equation du 2nd degre\n");
        printf("Saisir ta reponse: ");
        fflush(stdin);
        scanf("%d",&typ);
    }
    while(typ != 1 && typ!= 2);
    switch(typ){
      case 1 :
        printf("\nEntrer les valeurs de b et c de l'equation bx+c=0\n");
        scanf("%f%f",&b,&c);
        if(b==0)
            printf("\npas de solution\n");
        else
            printf("\nLa solution est %.2f",-c/b);
        break;
      case 2 :
        printf("\nEntrer les valeurs de a, b et c de l'equation axx+bx+c=0\n");
        scanf("%f%f%f",&a,&b,&c);
        if(a==0)
            printf("\nConfert equation du premier degre\n ");
        else if(a!=0)
            d=(b*b)-4*a*c;
            if(d>0)
            printf("\nLes solutions sont %f et %f",(-b-sqrt(d))/(2*a),(-b+sqrt(d)/(2*a)));
            else if(d<0)
            printf("\nPas de solution");
            else
                printf("\nLa solution unique est %.3f",-b/2*a);
        break;
            }
    return 0;
}
