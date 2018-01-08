#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;
    int code;

    /*for (c="A";c<="Z";c++)
    {
        printf("\nCaractere %c code %d code hexa %x",c,c,c);
        printf("\n");
    }
    for (c="1";c<="9";c++)
    {
        printf("\nCaractere %c code %d code hexa %x",c,c,c);
        printf("\n");
    }
    */
    printf("\n");
    printf("Entrer un Caractere: ");
    scanf("%c",&c);
    fflush(stdin);
    printf("%c a pour code %d\n",c,c);
    printf("Entrer un code: ");
    scanf("%d",&code);
    fflush(stdin);
    printf("%d correspond au Caractere %c\n",code,code);
    main();
    system("pause");
    return 0;
}
