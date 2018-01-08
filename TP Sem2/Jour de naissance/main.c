#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
int main()
{
    int J=0,M=0,A=0,Z=0,N1,N2,N3,N4,N5,N6,N7;
    char jour[10];
    char rep;
    do
    {
        printf("\nEntrer votre date de naissance(JJ/MM/AAAA): ");
        scanf("%d",&J);
        getchar();
        scanf("%d",&M);
        getchar();
        scanf("%d",&A);
        N1=(23*M)/9;
        N2=A/4;
        N3=A/100;
        N4=A/400;
        Z=A-1;
        N5=Z/4;
        N6=Z/100;
        N7=Z/400;

        if (M>=3)
        {
            J=(N1 + J + A + N2 - N3 + N4 + 2)%7;
        }
        else
        {
            J=(N1+J+4+A+N5-N6+N7)%7;
        }
        switch (J)
        {
        case 0:
            strcpy(jour,"Dimanche");
            break;
        case 1:
            strcpy(jour,"Lundi");
            break;
        case 2:
            strcpy(jour,"Mardi");
            break;
        case 3:
            strcpy(jour,"Mercredi");
            break;
        case 4:
            strcpy(jour,"Jeudi");
            break;
        case 5:
            strcpy(jour,"Vendredi");
            break;
        default:
            strcpy(jour,"Samedi");
            break;
        }
        printf("Vous ete ne un %s\n",jour);
        do
        {
            printf("\nVoulez-vous recommencer(O/N)?: ");
            rep=toupper(getche());
            fflush(stdin);
            if (rep!='o' || rep!='n')
                printf("\a");
        }
        while (rep!='o' || rep!='n');
    }
    while (rep=='o');

    return 0;
}
