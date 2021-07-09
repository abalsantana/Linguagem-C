/*
Questão 02: Desenvolver uma função recursiva que exiba todos os múltiplos do número N,inferiores ao valor V. *
*/

#include <stdio.h>

void multiploN(int N, int V)
{
    if (V % N == 0 && V > N) //N = 2 e V = 10
    {
        multiploN(N, V - N);
        printf("%d ", V-N);
    }
    else if (V % N == 1 && V > N)
    {
        multiploN(N, V - 1);
        printf("%d ", V-N+1);
    }
    else{
      return;
    }
}

int main()
{
    int N, V, res;

    printf("Informe um numero e outro numero para o limite: ");
    scanf("%d %d", &N, &V);

    multiploN(N, V);

    return 0;
}