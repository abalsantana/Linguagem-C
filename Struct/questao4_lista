#include <stdio.h>
#include <string.h>
#define TAM 2
/*Quest�o 04:  Suponha a exist�ncia de um vetor de tamanho TAM, 
cada posi��o armazenando o nome da pessoa e a sua data de anivers�rio
 (representada por um struct do tipo TData, contendo os campos dia e mes).
  Pede-se o desenvolvimento das seguintes fun��es:
   Determinar a quantidade de pessoas que fazem anivers�rio no m�s M; 
   Exibir os nomes de todas pessoas que fazem anivers�rio entre as datas d1
    e d2, ambas do tipo Tdata*/


typedef struct{
	int dia;
	int mes;
}Tdata;

typedef struct{
	char nome[10];
	Tdata niver;
}TNome;

int aniversario(TNome p[], int quant){
	int i, qtPessMes12 = 0;

	for(i=0;i<quant;i++){
		if(p[i].niver.mes == 12){
			qtPessMes12++;
		}
	}
	return qtPessMes12;
}

void captura(TNome p[]){
	int i;

	for(i=0;i<TAM;i++){
		//fflush;
		printf("Informe o dia: \n");
		scanf("%d", &p[i].niver.dia);
		printf("Informe o mes: \n");
		scanf("%d", &p[i].niver.mes);
		printf("Informe o nome: \n");
		scanf("%s",&p[i].nome);
	}

}

void exibeNome(TNome p[], int quant){
	int i;
	for(i=0;i<quant;i++){
		if((p[i].niver.dia >=1 && p[i].niver.dia <=20) && (p[i].niver.mes >=5 && p[i].niver.mes <=12)){
			printf("Nome: %s\n",p[i].nome);
		}
	}
}

int main(void) {
	TNome p[TAM];

	captura(p);
  printf("Quantidade de Pessoas que faz aniversario no mes Dezembro: %d\n",
  	aniversario(p, TAM)
	  );
	exibeNome(p, TAM);
	
  return 0;
}