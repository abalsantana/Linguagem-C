#include <stdio.h>
#include <stdlib.h>

#define TAML 6
#define TAMC 6

/*QUESTÃO 04:
Fazer uma função que, dada uma matriz M 6×6 ,
determine se ela é simétrica.*/

int determinaMatriz(int M[TAML][TAMC])
{
    int i, j;

    for (i = 0; i < TAML; i++)
    {
        for (j = i + 1; j < TAMC; j++)
        {
            if (M[i][j] != M[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int M[TAML][TAMC], x;
    x = determinaMatriz(M);
    if (x == 1)
    {
        printf("Simetrica");
    }else{
        printf("Nao Simetrica");

    }

    return 0;
}
