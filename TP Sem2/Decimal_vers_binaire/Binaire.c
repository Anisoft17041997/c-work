#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 int main()
{
    int n,c,k;

    printf("\t\t#################################\n");
    printf("\t\t#   CONVERSION\n                #\n");
    printf("\t\t#   DECIMAL->BINAIRE            #\n");
    printf("\t\t#################################\n\n");
    printf("\t\tEntrer un entier: ");
    scanf("%d",&n);
    printf("\t\t%d en binaire est : ",n);
    for(c=7;c>=0;c--)
    {
        k=n>>c;
        if (k & 1)
            printf("1");
        else
            printf("0");

    }
    return 0;
}
