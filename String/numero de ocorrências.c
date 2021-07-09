#include <stdio.h>
#include <stdlib.h>
#include <string>



int numOcorrencia(char s[], char c[]){
	int i, count=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==c){
			count++;
		}
	}
	return count;
}

int main(void) {
	char str[20],ch;
	int qtde;
	printf("Entre com uma string:");
	fflush(stdin);//Esvaziar o buffer
	gets(str);
	printf("Entre com o caracter a ser buscado:");
	fflush(stdin);//Esvaziar o buffer
	scanf("%c",&ch);
	qtde = numOcorrencia(str,ch);
	printf("Forma encontradas %d ocorr�ncias do caracter %c na string %s.\n",qtde,ch,str);
	

	return 0;
}
