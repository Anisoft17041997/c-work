#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[25],resu[99];
    int  age;

    printf("Entrer votre nom: ");
    gets(nom);
    printf("Entrer votre age: ");
    scanf("%d",&age);

    sprintf(resu,"Votre nom est %s et votre age est %d ans",nom,age);
    puts(resu);
    return 0;

}
