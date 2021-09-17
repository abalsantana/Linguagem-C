#include <stdio.h>
#include <stdlib.h>

/* torre de hanoi */

void hanoi(int n, char origem, char destino, char aux){
	if(n>0){
		hanoi(n-1,origem,aux,destino);
		printf("Mova o disco %d da pilha %c para a pilha %c\n", n, origem, destino);
		hanoi(n-1,aux,destino,origem);
	}
}

int main(void) {
	int n;
	char origem = 'A', destino = 'C', aux = 'B';
	printf("Informe o numro de discos:");
	scanf("%d",&n);
	hanoi(n,origem,destino,aux);
	return 0;
}

