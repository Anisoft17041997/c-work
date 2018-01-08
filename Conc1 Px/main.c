#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char noms[100][50];
	int n,i;
	printf("\nEntrer the number of names : ");
	scanf("%d",&n);

	for (i = 0; i < n; ++i)
	{
		printf("\nEntrer name number %d : ",i+1);
		scanf("%s",noms[i]);
	}

	for (n = 0; n < i; n++)
	{
		printf("Hello %s\n",noms[n]);
	}

	return 0;
}