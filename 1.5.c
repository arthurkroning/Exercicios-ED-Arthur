#include <stdio.h>

main ()
{
int Q, Y, i,a;
a=0;

while (Q > 10);
{
printf("digite o tamanho do vetor: ");
scanf("%d",&Q);
}

int Z[Q], W[Q];

for (i=1; i<=Q; i++)
	{
	printf("Indice %d do vetor: \n",i);
	scanf("%d",&Z[i]);
	}
printf("Escolha um numero:");
scanf("%d",&Y);

for (i=1; i<=Q; i++)
	{
	if (Z[i] > Y)
		{
		W[a] = Z[i];
		printf("%d \n",W[a]);
		a++;
		}
	}

}
