#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t seconde;
    struct tm instant;
    int Mois;
    char ListeDesMois[12][12]={"Janvier","Fevrier","Mars","Avril","Mai","Juin",
    "Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};

    time(&seconde);
    instant=*localtime(&seconde);
    Mois=instant.tm_mon+1;
    switch(Mois)
    {
    case 1:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[0],instant.tm_year+1900);
        break;
    case 2:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[1],instant.tm_year+1900);
        break;
    case 3:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[2],instant.tm_year+1900);
        break;
    case 4:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[3],instant.tm_year+1900);
        break;
    case 5:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[4],instant.tm_year+1900);
        break;
    case 6:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[5],instant.tm_year+1900);
        break;
    case 7:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[6],instant.tm_year+1900);
        break;
    case 8:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[7],instant.tm_year+1900);
        break;
    case 9:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[8],instant.tm_year+1900);
        break;
    case 10:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[9],instant.tm_year+1900);
        break;
    case 11:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[10],instant.tm_year+1900);
        break;
    case 12:
        printf("%d %s %d  ",instant.tm_mday,ListeDesMois[11],instant.tm_year+1900);
        break;
    }
    printf(" %d:%d:%d\n",instant.tm_hour,instant.tm_min,instant.tm_sec);

    return 0;
}
