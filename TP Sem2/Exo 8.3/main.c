#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char TXT[200];
    char tmp;
    int i,j,e=0,L;
    do
    {
        printf("\nEntrer un texte(max: 200 caractere): ");
        gets(TXT);
    }
    while (strlen(TXT)>200);
    /*a.) La longueur L de cette chaîne*/
    for (L=0; TXT[L]; L++);
    printf("\nLa longeur de la chaine est: %d",L);
    /*b.) Le nombre de 'e' dans la chaine*/
    for (i=0; i<strlen(TXT); i++)
    {
        if (TXT[i]=='e' || TXT[i]=='E'){
            e++;
        }
    }
    printf("\nLe nombre de \'e\' dans la chaine est: %d\n",e);
    /*c.) Affichage de toute la chaine à rebour*/
    printf("\nLe texte en rebour donne: \n");
    for (i=L-1;i>=0;i--)
        printf("%c",TXT[i]);
    printf("\n");
    /*c.) Avec inversion des caractères*/
    for (i=0;i<L;i++){
        for (j=i+1;j<L-1;j++){
            tmp=TXT[i];
            TXT[i]=TXT[j];
            TXT[j]=tmp;
        }
    }
    printf("%s",TXT);
    main();
    return 0;
}
