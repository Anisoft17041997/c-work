#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;
    for(c='0'; c<='9'; c++)
        printf("\n\t%c            code dec %d         code hex %x",c,c,c);
    printf("\n");
    for(c='A'; c<='Z'; c++)
        printf("\n\t%c            code dec %d         code hex %x",c,c,c);
    printf("\n");
    for(c='a'; c<='z'; c++)
        printf("\n\t%c            code dec %d         code hex %x",c,c,c);
    printf("\n");
    int d=5;
    printf("%d %c",d,d);
    system("pause");
    return 0;
}
