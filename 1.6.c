#include <stdio.h>

main()
{
    int L,C,i,j;

    printf("Digite um valor para L(m�ximo 10):");
    scanf("%d",&L);
    while (L>10 || L<0)
        {
        printf("Digite um valor para L(m�ximo 10):");
        scanf("%d",&L);
        }

    printf("Digite um valor para C(m�ximo 10):");
    scanf("%d",&C);
    while (C>10 || C<0)
        {
        printf("Digite um valor para C(m�ximo 10):");
        scanf("%d",&C);
        }

int M[L][C],v,f=0;

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("Informe um valor para a linha %d coluna %d:",i,j);
            scanf("%d",&M[i][j]);
        }
        
    }

    printf("Informe um valor a ser buscado na Matriz:");
    scanf("%d",&v);

    while (v>0)
    {
        
        for (i = 0; i < L; i++)
        {
            for (j = 0; j < C; j++)
            {
                if (v==M[i][j])
                {
                    f=9;
                }
                
            }
        
        }

        if (f==9)
        {
            printf("Est� na matriz\n");
        }
        else
        {
            printf("N�o est� na matriz\n");
        }
        
        f=0;
        printf("Informe um valor a ser buscado na Matriz:");
        scanf("%d",&v);
        
    }
    
    
    
}
