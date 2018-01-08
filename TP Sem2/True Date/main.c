#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t temps;
    struct tm date;
    time(&temps);
    date=*localtime(&temps);
    printf("%s\n",asctime(&date));
    system("pause");
    return 0;
}
