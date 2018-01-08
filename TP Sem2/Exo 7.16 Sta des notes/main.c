#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    char rep;
    int N;//The number Students
    int NOTES[7];//Array of grades
    int MAXN,MINN,i,k;//Meter
    int Tabpoints[100];//Array of grades
    int Max,Min,Moy,SOM;//No comment: we know them

    printf("\nPlease enter the number of students: ");
    scanf("%d",&N);
    printf("\nGive now their grades one by one\n");
    for (i=0; i<N; i++)
    {
        printf("\nThe grade of student [%d]: ",i+1);
        scanf("%d",&Tabpoints[i]);
    }
    printf("\nThe given array: ");
    for (i=0; i<N; i++)
    {
        printf("%d\t",Tabpoints[i]);

    }
    /*The research of maximum grade */
    Max=Tabpoints[0];
    for (i=0; i<N; i++)
    {
        if (Tabpoints[i]>Max)
            Max=Tabpoints[i];
    }
    printf("\nThe maximum grade is: %d",Max);

    /*The research of minimum grade*/
    Min=60;
    for (i=0; i<N; i++)
    {
        if (Tabpoints[i]<Min)
            Min=Tabpoints[i];
    }
    printf("\nThe minimum grade is: %d\n",Min);
    //Calculation of sum
    for (SOM=0,i=0; i<N; i++)
    {
        SOM+=Tabpoints[i];
    }
    Moy=SOM/N;
    printf("\nThe middle grade is: %d\n",Moy);
    //The establishment of grade array
    for (k=0; k<7; k++)
    {
        NOTES[k]=0;
    }
    /*
    .First possibility
    for (i=0;i<N;i++)
        J=Tabpoints[i]/10;
        NOTES[J]++;
    .Second possibility
    for (i=0;i<N;i++)
        if(Tabpoints[i]>=50)
            NOTES[5]++;
        else if (Tabpoints[i]>=40)
            NOTES[4]++;
        .......
        .......
        else
    */
    for (i=0; i<N; i++)
    {
        NOTES[Tabpoints[i]/10]++;
    }
    //Research of MAXN
    for (MAXN=0,k=0; k<7; k++)
    {
        if (NOTES[k]>MAXN)
            MAXN=NOTES[k];
    }
    for (MINN=0,k=0; k<7; k++)
    {
        if (NOTES[k]<MINN)
            MINN=NOTES[k];
    }
    //Graphic representation
    for (i=MAXN; i>0; i--)
    {
        printf("\n%2d>",i);
        for (k=0; k<7; k++)
        {
            if (NOTES[k]>=i)
                printf(" #######");
            else
                printf("        ");

        }

    }
    //Domain number display
    printf("\n   +");
    for (k=0; k<=6; k++)
    {
        printf("-------+");
    }
    printf("\n   I 0 - 9 I 10-19 I 20-29 I 30-39 I 40-49 I 50-59 I  60   I\n");

    printf("\nWould you want to retry(Y/N)?: ");
    rep=toupper(getche());
    if(rep=='Y')
    {
        main();
    }
    else if(rep=='N')
    {
        printf("\nThanks!\n");
        system("exit");
    }
    else
        printf("\a\nError!\n");
    return 0;
}
