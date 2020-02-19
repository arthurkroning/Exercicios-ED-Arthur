#include <stdio.h>
main ()
{
retangulotracos ();
printf("\n");
retangulotracos ();
}

void exibeonzetracos (void)
{
printf("-----------\n");
}

void retangulotracos (void)
{
int i;
for (i=0; i<4; i++)	
	{
	exibeonzetracos ();
	}
}
