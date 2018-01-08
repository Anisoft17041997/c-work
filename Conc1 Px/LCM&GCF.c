#include <stdio.h>
#include <stdlib.h>

int pgcd(unsigned int A, unsigned int B)
{
	while((A*B) != 0)
	{
		if(A>B)
			A -= B;
		if(A<B)
			B -= A;
		if(A==B)
			B = 0;
	}
	return A;
}

int ppcm(unsigned int X, unsigned int Y)
{
	unsigned int temp;
	int res;
	if(X > Y)
	{
		temp = X;
		X = Y;
		Y = temp;
	}
	if( X%Y == 0)
	{
		res = X;
	}
	else
	{
		res = X*Y;
		while(Y != 0)
		{
			temp = X%Y;
			X = Y;
			Y = temp;	
		}
		res = res/X;
	}
	return res;
}

int main(){
	 long n,i;
	 int a,b;
	 do
	 {
	 	scanf("%ld",&n);
	 	if(n < 1 && n > 1000)
	 	{
	 		exit(EXIT_FAILURE);
	 	}
	 	i = n;
	 	do{
	 		scanf("%d",&a);
	 		scanf("%d",&b);
	 		printf("%d\n",pgcd(a,b));
	 		printf("%d\n",ppcm(a,b));
	 		i--;
	 	}while(i>0);
	 	
	}while(n < 1 && n > 1000);
	
}	