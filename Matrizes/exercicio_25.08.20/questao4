#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAML 6
#define TAMC 6

/*QUESTÃO 04:Fazer uma função que, dada uma matriz M6×6, determine se ela é simétrica.*/


void geraMatriz(int M[TAML][TAMC]){
	int i, j;
  srand(time(NULL));
	for(i=0; i<TAML; i++){
		for(j=0;j<TAMC; j++){
			M[i][j] = rand() % 10;
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
}

int matriz(int M[TAML][TAMC])
{
  int i, j;
    for (i = 0; i < TAML; i++)
    {
        for (j = i+1; j < TAMC; j++)
        {
					if(M[i][j] == M[j][i])
            return 1;
        }
    }
		return 0;
}


int main()
{
    int M[TAML][TAMC], n;
		geraMatriz(M);
    n = matriz(M);
		if(n == 1)
			printf("Eh simetrica!");
		else
		printf("Nao eh simetrica!");
		
    
    return 0;
}