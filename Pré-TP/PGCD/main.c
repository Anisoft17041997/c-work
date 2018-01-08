#include <stdio.h>
#include <stdlib.h>
int pgcd (int a, int b);
int main(){
    int a,b;
    printf("Entrer un entier a: ");
    scanf("%d",&a);
    printf("Entrer un entier b: ");
    scanf("%d",&b);
    printf("PGCD(%d,%d)=%d\n\n",a,b,pgcd(a,b));
    system("Pause");
    return 0;
}

int pgcd (int a, int b){
    int c;
    while (b!=0){
        c=a%b;
        a=b;
        b=c;
    }
return a;
}

