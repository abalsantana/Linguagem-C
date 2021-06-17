#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define TAM 5

void preencheVetor(int vagas[], int vtr[]){
	for(int i=0;i<TAM;i++){
		printf("Informe a vtr %d: ", (i+1));
		scanf("%d", &vtr[i]);
		vagas[i] = vtr[i];
	}
}

void exibeVtrVagas(int vagas[], int vtr[]){
	for(int i=0; i<TAM; i++){
		printf("vaga %d: %d\n", (i+1), vtr[i]);
	}
}

void retiraVtr(int vagas[], int vtr[]){
	for(int i=0; i<TAM; i++){
		vagas[i] = vagas[i+1];
		vagas[TAM] = 0;
		printf("\nvaga %d: %d\n", (i+1), vagas[i]);
	}
}

int main() {
int vagas[TAM], vtr[TAM];
preencheVetor(vagas, vtr);
exibeVtrVagas(vagas, vtr);
retiraVtr(vagas, vtr);

	return 0;
}