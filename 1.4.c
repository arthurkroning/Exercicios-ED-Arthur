#include <stdio.h>
main ()
{
int a,b, N,i;
printf("escreva o numero de repeticoes: ");
scanf("%d",&N);

for(i=1; i<=N; i++)
	{
	printf("digite um valor: ");
	scanf("%d",&a);
	printf("digite outro valor: ");
	scanf("%d",&b);
	maiorNumero (a,b);
	}
}

maiorNumero (int a, int b)
{
if (a == b)
	{
	printf("eles sao iguais\n");
	}
if(a > b)
	{
	printf("%d e maior\n",a);
	}
if (b > a)
	{
	printf("%d e maior\n",b);
	}

}
