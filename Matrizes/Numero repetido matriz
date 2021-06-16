#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAML 2
#define TAMC 2

void matriz(int M1[TAML][TAMC]){
	int i, j;
	srand(time(NULL));
	for(i=0;i<TAML;i++){
		for(j=0;j<TAMC;j++){
			printf("%d ",M1[i][j] = rand()%2);
		}
		printf("\n");
	}
}

int verificaRepeticoes(int M1[TAML][TAMC]){
	int i,j,cont=0;
	for(i=0;i<(TAML*TAMC);i++){
		for(j=i+1;j<(TAML*TAMC-1);j++){
				if(M1[i][i]==M1[j][j]){
				cont++;
			}
		}
	}
	return cont;
}

int main() {
	int M[TAML][TAMC]; 
	matriz(M);
	printf("%d",verificaRepeticoes(M));

	
	return 0;
}