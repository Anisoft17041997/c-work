#include <stdio.h>
#include <stdlib.h>

int main()
{
    double PTTC;
    int PNET,PTVA,choix;
    printf("********** Calcul du prix TTC ou du prix NET **********\n");
    printf("1-Calculer le prix TTC\n");
    printf("2-Calculer le prix NET\n");
    printf("Entrer votre choix: ");
    scanf("%i",&choix);

    switch(choix)
    {
    case 1:
        printf("\nEntrer le prix net du produit: ");
        scanf("%i",&PNET);
        printf("Entrer le pourcentage TVA: ");
        scanf("%i",&PTVA);
        PTTC=(PNET)*(1+PTVA/100.0);
        printf("Le prix TTC donne %lf",PTTC);
        break;
    case 2:
        printf("\nEntrer le prix TTC du produit: ");
        scanf("%lf",&PTTC);
        printf("Entrer le pourcentage TVA: ");
        scanf("%i",&PTVA);
        PNET=(double)PTTC/(1+(double)PTVA/100);
        printf("Le prix NET donne %lf",PTTC);
        break;
    }
    return 0;
}
