#include <stdio.h>
#include <stdlib.h>
/*2)Preencher um vetor com os numeros pares do número 2 a 20.*/

void prencheVetor(int vet[], int num){
	for(int i=1;i<=10;i++){
		vet[i] = i*2;
	}
}


void exibe(int vet[], int num){
	for(int i=1;i<=10;i++){
		printf("item %d\n", vet[i]);
	}
}

int main(void) {
  int vet[10], num;
	prencheVetor(vet, num);
	exibe(vet, num);
	

  return 0;
}