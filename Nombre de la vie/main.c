#include <stdio.h>

int main(void)
{
    int T[20];
    int nb;
    int i = 0;
    int j;
    do
    {
        scanf("%d",&nb);
        T[i] = nb;
        i++;
        if(T[i] == 42)
        {

        }
    }
    while(nb != 42);
    for(j = 0; j<i; j++)
    {
        printf("%d\t",T[j]);
    }

    return 0;
}
