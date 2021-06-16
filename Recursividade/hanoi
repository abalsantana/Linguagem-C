#include <stdio.h>
#include <stdlib.h>

/* torre de hanoi */

void hanoi(int n, char origem, char destino, char aux){
	if(n>0){
		hanoi(n-1,origem,aux,destino);
		printf("%c >> %c\n", origem, destino);
		hanoi(n-1,origem,destino,aux);
	}
}

int main(void) {
	int n;
	char origem,destino,aux;
	printf("Informe o valor de n:");
	scanf("%d",&n);
	hanoi(n)
	return 0;
}
