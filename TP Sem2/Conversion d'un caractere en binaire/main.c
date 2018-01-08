#include <stdio.h>
#include <stdlib.h>

int main()
{
/* notation utilisant la structure while */
int C, I;
printf("Entrer un caractere: ");
C=getchar();
printf("%c en binaire donne: ",C);
for (I=128 ; I>=1 ; C%=I, I/=2)
printf("%i", C/I);
return 0;
}
