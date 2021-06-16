#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAML 5
#define TAMC 5


/* Armazenar uma matriz em um vetor */

void matriz(int M[TAML][TAMC]){
	srand(time(NULL));
	int i,j;
	for(i=0;i<TAML;i++){
		for(j=0;j<TAMC;j++){
			printf("%d ",M[i][j] = rand()%7);
		}
		printf("\n");
	}
}

void armazena(int M[TAML][TAMC]){
	int vet[TAML*TAMC];
	int i,j; 
	for(i=0;i<TAML;i++){
		for(j=0;j<TAMC;j++){
			vet[i] = M[i][j];
			printf("%d ", vet[i]);
		}
	}
}

int main() {
	int M[TAML][TAMC], vet[TAML*TAMC], i, j;
		matriz(M);
		printf("\n");
		armazena(M);
		
		
	return 0;
}