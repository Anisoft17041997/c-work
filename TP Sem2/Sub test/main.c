#include <stdio.h>
#include <stdlib.h>
int main(){
	char *p;
	cha A[2];
	p=&A;
	printf("Entrer un caractere: " );
	scanf("%c",p);
	printf("Vous avez Entrer: %c\n",*p);
    return 0;
}
