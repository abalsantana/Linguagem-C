#include <stdio.h>
#include <string.h>

/*palindromo */

int palindromo(char *s)
{
	int i, j;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return 0;//Não é Palíndromo!
		}else{
			return 1; //é Palíndromo!
		}
	}
}

int main()
{

	char s[7] = "bananab";
	int n;
	
	n = palindromo(s);

	if(n == 1){
		printf("Palindromo!");
	}else{
		printf("Nao eh Palindromo!");
	}

	return 0;
}