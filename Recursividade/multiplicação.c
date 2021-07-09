//Fun��o recursiva para o c�lculo de x * y, atrav�s de sucessivas somas

#include <stdio.h>
#include <stdlib.h>


int multiplicacao (int a, int b);

//main

int main ()
{
	int num1, num2, res;
	
	printf ("Numero 1: ");
	scanf ("%d", &num1);
	
	printf ("Numero 2: ");
	scanf ("%d", &num2);
	
	//chamando a fun��o
	res = multiplicacao (num1, num2);
	printf ("%d * %d = %d\n\n", num1, num2, res);	
}

//implementa��o da fun��o de multiplica��o
int multiplicacao (int a, int b)
{
	if (b == 0)			//caso base
	{
		return 0;
	}
	else				//caso geral
	{
		return a + multiplicacao (a, b-1);
	}
}
