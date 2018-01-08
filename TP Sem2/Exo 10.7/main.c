#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Prototype de fonctions*/
    double EXP1(double X,int N);
    void EXP2(double *X,int N);
    double A;
    int B;
    printf("Entrer un reel: ");
    scanf("%lf",&A);
    printf("Entrer un exposant positif: ");
    scanf("%d",&B);
    printf("%2.f expo %d = %lf",A,B,EXP1(A,B));
    printf("\nEXP2(%2.f,%d)=",A,B);
    EXP2(&A,B);
    printf("\n");
    return 0;
}

double EXP1(double X,int N){
    double RES;
    for (RES=1.0;N>0;N--)
        RES*=N;
    return RES;
}
void EXP2(double *X,int N){
    double AIDE;
    for (AIDE=1.0;N>0;N--)
        AIDE*=*X;
    *X=AIDE;
}
