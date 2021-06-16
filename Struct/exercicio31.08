#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* struct */

typedef struct{
	char nome[8];
	float av1, av2, media;
	char situacao[10];
}TAluno;


void cadastra(TAluno aluno[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Informe o nome do aluno %d: \n", (i+1));
		scanf("%s", aluno[i].nome);
		printf("Informe a AV1 do aluno %d: \n", (i+1));
		scanf("%f", &aluno[i].av1);
		printf("Informe a AV2 do aluno %d: \n", (i+1));
		scanf("%f", &aluno[i].av2);
	}
}

void media(TAluno aluno[], int n){
	int i;
	for(i=0; i<n; i++){
		aluno[i].media = (aluno[i].av1 + aluno[i].av2)/2;
		if(aluno[i].media >= 4.0 && aluno[i].media < 6.0){
			strcpy(aluno[i].situacao, "AVF");
		}else if(aluno[i].media < 4.0){
			strcpy(aluno[i].situacao, "Reprovado");
		}else{
			strcpy(aluno[i].situacao, "Aprovado");
		}
	}
}

void busca(int num){
	if(num == 1){
			printf("%s", aluno[i].nome);
		}else if(num == 2){
			printf("%s", aluno[i].nome);
		}else{
			printf("%s", aluno[i].nome);
		}
}

void exibe(TAluno aluno[], int n, int num){
	busca(num);
	for(i=0; i<n; i++){
		if()
	}
}

int main() {
	int n, num;
	printf("\nInforme quantos alunos: ");
	scanf("%d", &n);
	TAluno aluno[n]; 
	
	cadastra(aluno, n);

	printf("\nInforme qual tipo de aluno deseja buscar: Aprovado, Reprovado ou AVF");
	scanf("%d", &num);
	exibe(aluno, n, num);
	
	return 0;
}