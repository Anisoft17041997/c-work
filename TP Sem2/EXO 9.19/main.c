#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Déclarations des poniteurs sur char*/
    char *MFRAN[]={"\a\nErreur d'entrée!","Janvier","Fevrier","Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Décembre"};
    char *MDEUT[]={"\a\nEingabefehler","Junar","Febrar","Marz","April","Mai","Juni","Juli","August","Sepember","Oktober","November","Dezember"};
    /*Variables courants*/
    int J,M,A;//Pour la date
    int C=sizeof(int),C1;//Control
    /*Saisie des données*/
    printf("%d",C);
    do
    {

        printf("\nEntrer le jour: ");
        C1=scanf("%d",&J);
        fflush(stdin);
        printf("Entrer le mois: ");
        C1=scanf("%d",&M);
        fflush(stdin);
        printf("Entrer l'annee: ");
        C1=scanf("%d",&A);
        fflush(stdin);
        C=1;
        if (J<=0 || J>31 || M<0 || M>12 || A<0 || A>3000)
        {
            C=0;
            puts(MFRAN[0]);
            puts(MDEUT[0]);
        }
    }while(!C || !C1);
    /*Affichage des dates*/
        printf("Luxembourg, le %d%s %s %d\n",J,(J==1) ? "er":"",MFRAN[M],A);
        printf("Luxemburg, den %d %s %d\n",J,MDEUT[M],A);
    return 0;
    main();
}
