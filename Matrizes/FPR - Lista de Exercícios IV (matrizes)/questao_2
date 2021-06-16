#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAML 15
#define TAMC 20

/*QUESTÃO 02:
Desenvolver uma função que, dada uma matriz
M 15×20 , determine se um número X se encontra
na linha L da matriz.*/

void matriz(int M[TAML][TAMC])
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < TAML; i++)
    {
        for (j = 0; j < TAMC; j++)
        {
            M[i][j] = rand() % 9;
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int busca(int M[TAML][TAMC], int x, int L)
{
    int j;
    for (j = 0; j < TAML; j++)
    {
      if (x == M[L][j])
        {
          return 1;
        }    
    }
    return 0;
}

int main()
{
    int M[TAML][TAMC], x, l, z;
    matriz(M);
    printf("\n");
    printf("Informe um numero X a ser buscado: ");
    scanf("%d", &x);
    printf("\nInforme um numero L referente a linha: \n");
    scanf("%d", &l);
    z = busca(M, x, l);
    if (z == 1)
    {
        printf("\nEncontrado!");
    }
    else
    {
        printf("\nNão Encontrado!");
    }
    return 0;
}