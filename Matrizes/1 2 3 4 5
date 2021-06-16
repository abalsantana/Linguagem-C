#include <stdio.h>
#include <stdlib.h>

void atriz(int M[5][5]){
	int i, j;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			M[i][j] = i+j+1;
		}
	}
}

void exibe(int M[5][5]){
	int i, j;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf(" %d", M[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int M[5][5];
	Matriz(M);
	exibe(M);
	
	return 0;
}