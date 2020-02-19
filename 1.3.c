#include <stdio.h>
exibeDivisores (int i);

main ()
{
int i;

for (i=1; i<=20; i++)
	{
	printf("%d: ",i);
	exibeDivisores(i);
	}
}

exibeDivisores (int i)
	{
	int a, div;
	for (a=1; a<=i; a++)
		{
		div = i % a;
		if (div == 0)
			{
			printf("%d ",a);
			}
		
		}
		printf("\n");
	}
