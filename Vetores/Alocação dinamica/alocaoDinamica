#include <stdio.h>
#include <stdlib.h>
#define MAX 3

void preenche(int vagas[], int vtr[]){
	for(int i=0; i<MAX;i++){
		printf("Digite a vtr %d: \n", (i+1));
		scanf("%d", &vtr[i]);
		vagas[i] = vtr[i];
	}
}

void exibe(int vagas[], int vtr[]){
	for(int i=0; i<MAX; i++){
		printf("\nVaga %d: %d\n", (i+1), vagas[i]);
	}
}

int main(void) {
	int *n, vagas[MAX], vtr[MAX];

	n = (int *) malloc(MAX * sizeof(int));
	if(n == NULL){
		printf("Memoria insulficiente!");
		exit(1);
	}

	preenche(vagas, vtr);
	exibe(vagas, vtr);

	return 0;
}