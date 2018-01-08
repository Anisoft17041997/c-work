#include <stdio.h>
#include <stdlib.h>
#define LG 20
int main()
{
    int i,j;
    for (i=0; i<LG; i++)
    {
        printf(" ");
        for (j=0; j<LG; j++)
        {

            printf("--");
            //printf("|");
        }
        printf("\n");
        for (j=0; j<LG+1; j++)
        {
            //printf("--");
            printf("| ");
        }
        printf("\n");
    }
    return 0;
}
