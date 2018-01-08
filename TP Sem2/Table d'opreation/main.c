#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,op;
    printf("\n1-Table d'addition");
    printf("\n2-Table de soustraction");
    printf("\n2-Table de multiplication");
    printf("\n2-Table de division\n");
    printf("\nEntrer la table: ");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        printf("\nTable d'addition\n");
        for (i=0; i<=10; i++)
        {
            for (j=1; j<=10; j++)
            {
                printf("%d + %d = %d",i,j,i+j);
                printf("\n");
            }
        printf("\n");
        }
        break;
    case 2:
        printf("\nTable de soustraction\n");
        for (i=1; i<10; i++)
        {
            for (j=1; j<20; j++)
            {
                if (j>i)
                    printf("%d - %d = %d",j,i,j-i);
                printf("\n");
            }
            printf("\n");
        }
        break;
    case 3:
        printf("\nTable de multiplication\n");
        for (i=1; i<=10; i++)
        {
            for (j=1; j<=10; j++)
            {
                if (i>j)
                    printf("%d * %d = %d",i,j,i*j);
                printf("\n");
            }
            printf("\n");
        }
        break;
        main();

    }
    return 0;
}
