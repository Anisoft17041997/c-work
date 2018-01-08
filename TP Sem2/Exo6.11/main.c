#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int X,Y,A,B;
    int RESTE;
    int CA,CB;
    do{
    printf("\nEntrer un entier non null A: ");
    CA=scanf("%d",&A);
    fflush(stdin);
    }while(CA==0 || !A || A<0);
    do
    {
        printf("\nEntrer un entier non null B: ");
        CB=scanf("%d",&B);
        fflush(stdin);
    }while(CB ==0 || !B || B<0);

    for(RESTE=A,X=A,Y=B; RESTE; X=Y,Y=RESTE)
        RESTE=X%Y;
    printf("\nPGCD (%d,%d) = %d ",A,B,RESTE);
    return 0;
}
*/
int main()
{
    int a,b;
    int CA,CB;
    do
    {
        printf("\nEntrer un entier non null a: ");
        CA=scanf("%d",&a);
        fflush(stdin);
    }
    while(CA==0 || !a || a<0);
    do
    {
        printf("\nEntrer un entier non null b: ");
        CB=scanf("%d",&b);
        fflush(stdin);
    }
    while(CB ==0 || !b || b<0);
    do{
    if (a>b)
        a-=b;
    else
        b-=a;
    }while(a!=b);
    printf("PGCD = %d",a);
    main();
    return 0;
}
