#include <stdio.h>
#include <stdlib.h>
/*01)Preencher um vetor com números inteiros(8unidades); solicitar um
número do teclado. Pesquisar se esse número existe no vetor. Se
existir,imprimir em qual posição do vetor. Se não existir,imprimir MSG
que não existe.*/

int busca (int vet[], int n){
	int i;
	for(i=0;i<8;i++){
		if(n==vet[i]){
			return i;	
		}
	}
	return -1;
}


int main(void) {
  int vet[8] = {4, 5, 1, 7, 9, 3, 2, 6}, n, t;
	printf("Informe o valor de n: \n");
	scanf("%d", &n);
	while(n!=0){
		t = busca(vet, n);
		if(t==-1){
			printf("Nao existe!");
		}else{
			printf("%d", t);
		}
		printf("\nInforme o valor de n: \n");
		scanf("%d", &n);
	}
	

  return 0;
}