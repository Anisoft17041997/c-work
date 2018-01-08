#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char nom[9]="Hello";
    char prenom[80];
    int c;
    int i=0;
    printf("%s\n",nom);
     /*
    c=getchar();
    while (c!=EOF){
        putchar(c);
        c=getchar();
    }
     */
    printf("Entrer votre nom: ");
    scanf("%s",nom);
    fflush(stdin);
    printf("\nEntrer votre prenom: ");
    gets(prenom);
    printf("%s\n",nom);
    printf("%s",prenom);
    while ((c=nom[i])){
        if (c>='A' && c<='Z'){
            c=c-'A'+'a';
        }
        else if (c>='a' && c<='z'){
            c=c-'a'+'A';
        }
    nom[i]=c;
    i++;
    }
    printf("\nNom=%s ",nom);
    return 0;
}
