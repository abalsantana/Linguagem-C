#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*Questão 03:Desenvolver  uma  função que,  dada  uma  string s, 
crie uma substring que inicie na posição p de s e contenha n caracteres.
Observações: se  p  e/ou  n  forem  inválidos,  a substring   será   vazia;   ii)   se   s
não   possuir   n caracteres  além  de  p,  a  substringa  ser  criada */


void substring(char s[], char sb[], int p, int n){
    int i,j;
    for(i=0,j=p;i<strlen(s) && j<n;i++,j++){
        sb[i] = s[j];
        printf("%c", sb[i]);
    }
}

int main(void){
int p, n;
char s[10], sb[5];

printf("Digite uma palavra com 9 letras: ");
gets(s);
printf("Informe a posicao a p de s e o numero de caracteres: ");
scanf("%d %d", &p, &n);

substring(s, sb, p, n);


    return 0;
}