#include <stdio.h>
#include <stdlib.h>
/*4)Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e
informar quantos números são maior que 30, Somar estes números.
Somar todos os números*/

void exibe(int vet[]){
	for(int i=0; i<8; i++){
		printf("%d ", vet[i]);
	}
}

//maiores que 30

int maiorestrinta(int vet[], int num){
	int cont=0, i;
	for(i=0;i<8;i++){
		if(vet[i] > 30){
		cont++;
		}
	}
	return cont;
}

//somar os numeros maiores que 30

int somar(int vet[], int num){
	int soma=0;
	for(int i=0; i<8;i++){
		if(vet[i]>30){
			soma+=vet[i];
		}
	}
	return soma;
}

int main(void) {
	int vet[8], num, i=0;
	while(i<8){
		printf("Informe o valor %d: \n", i+1);
		scanf("%d", &num);
		vet[i] = num;
		i++;
	}
	exibe(vet);
	
	printf("\nValores maiores que 30: %d", maiorestrinta(vet, num));
	printf("\nSoma: %d", somar(vet, num));
	return 0;
}