#include <stdio.h>
#include <stdlib.h>

void f(int *n, int *p){
	*n = 20;
	*p = 30;
}

int main(void) {
	int n;
	int p;
	
	f(&n, &p);
	printf("%d %d", n, p);

	return 0;
}