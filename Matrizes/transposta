#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 8
#define C 5

/*QUESTÃO 01:
Faça um função que, dada uma matriz M 8×5 de
reais, gere a matriz M t , sua transposta.*/

//Criar Matriz
int **criar_matriz()
{
    int i;
    int **M = (int **)malloc(L * sizeof(int*));
    if (M == NULL)
    {
        return 0;
    }
    for (i = 0; i < L; i++)
    {
        M[i] = (int *)malloc(C * sizeof(int));
        if (M[i] == NULL)
        {
            return 0;
        }
    }
    return M;
}

//Preencher Matriz

void preenche_matriz(int **M)
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            M[i][j] = rand() % 10;
        }
    }
}

//Exibe Matriz

void exibeMatriz(int **M)
{
    int i, j;
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf(" %d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

//Matriz Transposta
int **matriz_transposta(int **M)
{
    int i, j;
    int **ma = criar_matriz();
    for (i = 0; i < L;)
    {
        for (j = 0; j < C; j++)
        {
            ma[i][j] = M[j][i];
        }
    }
    return ma;
}

int main()
{
    int **M = criar_matriz();
    preenche_matriz(M);
    exibeMatriz(M);
    M = matriz_transposta(M);
    exibeMatriz(M);

    return 0;
}
