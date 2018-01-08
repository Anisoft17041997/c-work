#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    void Attendre(float temps);
    int i;
    for (i=3; i>0; i--)
    {
        printf("%d\n",i);
        Attendre(1);
        //printf("\n");
    }
    printf("\nBONNE FETE!\n");
    system("pause");
    return 0;
}
void Attendre(float temps)
{
    clock_t arrivee = clock() + (temps*CLOCKS_PER_SEC);

    while (clock()<arrivee);
}
