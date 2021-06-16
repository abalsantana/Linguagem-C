#include <stdio.h>
#include <stdlib.h>

/* struct */

typedef struct{
	int cod;
	char nome[8];
	float media;
	char status[2];
}Turma;


void cadastra(Turma turma[], int n){
	int i;
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Informe o codigo do aluno da turma %d: \n", (i+1));
		scanf("%d", &turma[i].cod);
		printf("Informe o nome do aluno da turma  %d: \n", (i+1));
		scanf("%s", turma[i].nome);
		printf("Informe a media do aluno da turma  %d: \n", (i+1));
	
		scanf("%2f", &turma[i].media);
		printf("Informe o status do aluno da turma  %d: \n", (i+1));
		fflush(stdin);
		scanf("%s",turma[i].status);
	}
}

void exibe(Turma turma[], int n){
	int i;
	for(i=0;i<n;i++){
		
		printf("Codigo do Aluno %d: %d\n", (i+1), turma[i].cod);
		printf("Nome do Aluno %d: %s\n", (i+1),turma[i].nome);
		printf("media do Aluno %d: %2f\n", (i+1),turma[i].media);
		printf("Status do Aluno %d: %s\n", (i+1),turma[i].status);
	}
}

int main() {
	int n;
	printf("Informe quantas turmas: ");
	scanf("%d", &n);
	Turma turma[n]; 
	
	cadastra(turma, n);
	exibe(turma, n);
	
	return 0;
}