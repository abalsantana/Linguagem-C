#include <stdio.h>
#include <stdlib.h>

/* 3) Fa�a uma fun��o recursiva que permita inverter um n�mero inteiro N. Ex: 123 - 321
 */
 
void inverte(int n){
	if(n>0){
		
		inverte(n/10);
		printf("%d",n);
		
	}
}

int main(void) {
	int n=123;
	inverte(n);
	return 0;
}
