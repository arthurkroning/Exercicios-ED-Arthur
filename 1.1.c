#include <stdio.h>

main ()
{
int Q,i,cd, cont;
float altura, malto, s, mal;
malto = 0;
s = 0;
cont= 0;

printf("quantos alunos tem na sala: ");
scanf("%d",&Q);

int A[Q];

for (i=1; i<=Q; i++)
	{
	printf("Qual a altura: ");
	scanf("%f",&altura);
	printf("digite (1)Masculino e (2)Feminino\n");
	scanf("%d",&cd);
		if (cd == 1)
			{
			if (altura > malto )
				{
				malto = altura;
				}
			}
		if (cd == 2)
			{
			s = s + altura;
			cont++;
			}
			
	}
mal = s / cont;
printf("O aluno mais alto: %f\n",malto);
printf("a media de altura das alunas: %f",mal);


}
