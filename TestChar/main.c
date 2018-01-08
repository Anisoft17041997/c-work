#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char *chercher(char *CH);
    printf("%s",chercher("Good morning sir"));
    return 0;
}

char *chercher(char *CH)
{
    while(*CH && !isspace(*CH))
    {
        CH++;
    }
    return CH;
}
