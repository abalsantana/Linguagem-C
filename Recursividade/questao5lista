#include<string.h>
#include<stdlib.h>
#include<stdio.h>

/palindromo/

int palind(char *s , int comeco , int fim) {
	if (comeco >= fim){
		return 1;
	}else{
		return (s[comeco] == s[fim]) &&
	palind(s, comeco+1, fim-1);
	}
}



int main()
{

	char s[10];
	int n;

	printf("Informe uma palavra: ");
  gets(s);

	n = palind(s , 0, strlen(s) - 1);

	if(n == 1){
        printf("É palindromo!");
    }else{
        printf("Nao é palindromo!");
    }
	
	return 0;
}