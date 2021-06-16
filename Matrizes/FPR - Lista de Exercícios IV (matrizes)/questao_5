#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define TAML 10
#define TAMC 5

/*QUESTÃO 05:
Implementar uma função que, dada uma matriz
M 10×8 , gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[1] consiste na soma dos elementos
da primeira coluna de M, o elemento V[2]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/

void matriz(int M[TAML][TAMC])
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < TAML; i++)
    {
        for (j = 0; j < TAMC; j++)
        {
            M[i][j] = rand() % 2;
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int somaColuna(int M[TAML][TAMC], int v[], int col)
{
    int i, soma = 0;
    for (i = 0; i < TAML; i++)
    {
        v[i] = M[i][col];
        soma += v[i];
    }
    return soma;
}



int main()
{
    int M[TAML][TAMC], v[TAMC], col=0;
    matriz(M);
    printf("\n");
    while (col < TAMC)
    {
       printf("%d ", somaColuna(M, v, col));
       col++;
    }
    return 0;
}