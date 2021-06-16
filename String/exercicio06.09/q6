#include <string.h>
#include <stdio.h>

/*Questão 03: Desenvolver uma função que, dada uma string s, crie uma substring que inicie na posição p de s e contenha n caracteres.Observações: se p e/ou n forem inválidos, a substring será vazia; ii) se s não possuir n caracteres além de p, a substring a ser criada começará em p e terminará no final de s.*/

void substring(char *s1, char *s2, int p, int n){
	int i, j;
	if(p<0 || p>strlen(s1) || (n<p || n>strlen(s1)-1) || (n<0)){
		printf("String Vazia!");
	}else{
		for(i=0, j=p; i<strlen(s1) && j<=n; i++, j++){
				s2[i] = s1[j];
		}
		printf("%s", s2);
	}
}

int main(){
    char s1[30], s2[10];
		int p, n;

		strcpy(s1, "Antonio Balbino");

		printf("Informe o valor de p e n; \n");
		scanf("%d %d", &n, &p);

		substring(s1, s2, n, p);

    return 0;
}