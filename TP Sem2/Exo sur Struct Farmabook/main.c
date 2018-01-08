#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char Nom[20];
    char Prenom[20];
    int age;
} personne;

int main()
{
    personne P;
    //personne *P1;
    printf("Entrer le nom de la personne: ");
    gets(P.Nom);
    printf("\nEntrer le prenom de la personne: ");
    gets(P.Prenom);
    printf("\nEntrer l'age de la personne: ");
    scanf("%d",&P.age);
    /*P1=&P;
    printf("\nVoici les info de cette personne: \n");
    printf("Nom: %s\n",P1->Nom);
    printf("Prenom: %s\n",P1->Prenom);
    printf("Age: %d\n",P1->age);*/
    /*ou encore */
    printf("Nom: %s\n",P.Nom);
    printf("Prenom: %s\n",P.Prenom);
    printf("Age: %d ans\n",P.age);
    return 0;
}
