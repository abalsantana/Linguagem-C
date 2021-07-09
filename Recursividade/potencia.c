//Fun��o recursiva para o c�lculo de x elevado a y

#include <stdio.h>
#include <stdlib.h>


int potenciaI (int x, int y);
int potenciaR (int x, int y);


//main

int main ()
{
	int base, exp, res;
	
	printf ("Base: ");
	scanf ("%d", &base);
	
	printf ("Expoente: ");
	scanf ("%d", &exp);
	
	//chamando a vers�o iterativa
	res = potenciaI (base, exp);
	printf ("%d elevado a %d = %d\n\n", base, exp, res);
	
	
	system ("pause");
	//chamando a vers�o recursiva
	res = potenciaR (base, exp);
	printf ("%d elevado a %d = %d\n\n", base, exp, res);
}

//implementa��o iterativa da fun��o pot�ncia
int potenciaI (int x, int y)
{
	int i, pot = 1;            //      1 x 4 x 4 x 4
	
	for (i=1;i<=y;i++)
	{
		pot *= x;   //pot = pot * x
	}
	
	return pot;
}

//implementa��o recursiva da fun��o pot�ncia
int potenciaR (int x, int y)
{
	if (y == 0)			//caso base
	{
		return 1;
	}
	else				//caso geral
	{
		return x * potenciaR (x, y-1);
	}
}
