#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,tmp;
    printf("Permutation de trois reels\n");
    printf("\nEntrer un reel A:");
    scanf("%d",&a);
    printf("\nEntrer un reel B:");
    scanf("%d",&b),
    printf("\nEntrer un reel C:");
    scanf("%d",&c);
    tmp=a;
    a=b;
    b=c;
    c=tmp;
    printf("%d\t%d\t%d ",a,b,c);
    return 0;
}
