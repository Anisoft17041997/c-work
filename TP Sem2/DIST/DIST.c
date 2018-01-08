#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d,dist;
    printf("************* Calcul de la distance entre deux points *****************\n");
    printf("Entrer les coordonne%ces du point A: \n",130);
    scanf("%f\n%f",&a,&b);
    printf("Entrer les coordonn%Ces du point B:\n",130);
    scanf("%f\n%f",&c,&d);
    dist=sqrt((b-a)*(b-a)+(d-c)*(d-c));
    printf("La distance entre A et B est: %f\n",dist);
    system("pause");
    return 0;
}
