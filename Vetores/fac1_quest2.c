#include <stdio.h>
#include <stdlib.h>
#define TAM 2
/*Questão 02:
Considere a existência de dois conjuntos
numéricos A e B contendo n1 e n2 elementos,
respectivamente. Pede-se o desenvolvimento
de uma função que determine se um dos
conjuntos está contido no outro, retornando os
seguintes códigos:
 1, se A estiver contido em B;
 2, se B estiver contido em A;
 0, caso contrário.*/

int verifica(int conjA[], int conjB[]){
	for(int i=0; i<TAM; i++){
		if(conjA[i]<=conjB[i]){
				return 1;
		}else if(conjB[i]>=conjA[i]){
				
				return 2;
				
		}else{
				return 0;
			
		}
	}
}

int main(void) {
int A[2]={0,1}, B[4]={0,1,3,5}, n;
n = verifica(A, B);
printf("Resultado: %d\n", n);

	return 0;
}