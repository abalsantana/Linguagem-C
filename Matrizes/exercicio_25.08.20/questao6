#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAML 12
#define TAMC 10

/*QUESTÃO 06: Considere uma loja que mantém em uma matriz o total vendido por cada funcionário pelos diversos meses do ano. Ou seja, uma matriz de 12 linhas (uma por mês) e 10 colunas (10 funcionários). Pede-se o desenvolvimento de uma função para cada item abaixo: a. Calcular o total vendido durante o ano; b. Dado um mês fornecido pelo usuário, determinar o total vendido nesse mês; c. Dado um funcionário fornecido pelo usuário, determinar o total vendido por ele durante o ano; d. Determinar o mês com maior índice de vendas; e. Determinar o funcionário que menos vendeu durante o ano.*/

//Gera Matriz com valores float
void geraMatriz(float M[TAML][TAMC]){
	int i, j;
  srand(time(NULL));
	for(i=0; i<TAML; i++){
		for(j=0;j<TAMC; j++){
			M[i][j] = rand() % 10;
			printf("%.1f ", M[i][j]);
		}
		printf("\n");
	}
}

//a. Calcular o total vendido durante o ano;
float calcTotalVendido(float M[TAML][TAMC])
{
  int i, j;
	int soma = 0;
    for (i = 0; i < TAML; i++)
    {
        for (j = 0; j < TAMC; j++)
        {
					soma += M[i][j];
        }
    }
		return soma;
}

//b. Calcular o total vendido no mês
float calcTotalMes(float M[TAML][TAMC], float v[], int mes){
	int i; float soma = 0;
	for(i=0; i<TAMC; i++){
			v[i] = M[mes][i];
			soma += v[i]; 
	}
	return soma;
}

//c. Calcular o total vendido no ano por um funcionário
float calcTotalAnoPorFunc(float M[TAML][TAMC], float v[], int func){
	int j; float soma = 0;
	for(j=0; j<TAML; j++){
		v[j] = M[j][func];
		soma += v[j];
	} 
	return soma;
}

//d. Determinar o mês com maior índice de vendas
int detMesMaiorIndVendas(float M[TAML][TAMC], float v[]){
	int maiorMes = 1, mes;
	float maiorValor = calcTotalMes(M, v, mes), totalMes;
	for(mes=2; mes<=TAML; mes++){
		totalMes = calcTotalMes(M, v, mes);
		if(maiorValor > totalMes){
			totalMes = maiorValor;
			maiorMes = mes;
		}
	}	
	return maiorMes;
}
	
//e. Determinar o funcionário que menos vendeu durante o ano.
int detFuncMenosVendeu(float M[TAML][TAMC], float v[], int func){
	int menorFunc = 1; 
	float menorVenda = calcTotalAnoPorFunc(M, v, func), totFunc;
	for(func=2; func<=TAMC; func++){
		totFunc = calcTotalAnoPorFunc(M, v, func);
		if(menorVenda < totFunc){
			totFunc = menorVenda;
			menorFunc = func;
		}
	}
	return menorFunc;
}


int main()
{
    float M[TAML][TAMC], n, m, x, vet[TAML];
		int mes, func, z, y;

		geraMatriz(M);
		
    n = calcTotalVendido(M);

		printf("\nDigite o mes que deseja consultar o total: ");
		scanf("%d", &mes);
		m = calcTotalMes(M, vet, mes);

		printf("\nDigite o num do funcionario que deseja consultar o total no ano: ");
		scanf("%d", &func);
		x = calcTotalAnoPorFunc(M, vet, func);

		y = detMesMaiorIndVendas(M, vet);

		z = detFuncMenosVendeu(M, vet, func);


	//resposta da alternativa a)
		printf("a) Total no ano: %.2f", n);

	//resposta da alternativa b)
		printf("\nb) Total no mes %d: %.2f", mes, m);

	//resposta da alternativa c)
		printf("\nc) Total no ano do funcionario %d: %.2f", func, x);
	
	//resposta da alternativa d)
		printf("\nd) Mes com maior indice de vendas: Mes %d", y);

	//resposta da alternativa e)
		printf("\ne) Funcionario que menos vendeu: \nFuncionario: %d", z);
    
    return 0;
}