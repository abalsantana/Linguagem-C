//-----------------------------------------------------------------------------
//  FAETERJ-Rio
//  Fundamentos de Programa��o - FPR - 2020/1
//  Professor Leonardo Vianna
//
//  Listas Duplamente Encadeadas
//
//  ==> A atividade consiste em completar a implementa��o, desenvolvendo as fun��es
//      de remo��o e a que exibe a lista na ordem inversa.
//
//  Pode ser feita em dupla ou individualmente.
//  Data limite de entrega: 29/11/2020
//
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//
//	JULIO CESAR GON�ALVES DOS SANTOS
//
//	ANTONIO BALBINO SANTANA DOS SANTOS
//
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TRUE 1
#define FALSE 0

int Ttamanho = 0;

typedef struct No
{
	int valor;
	struct No *prox, *ant;
} TNo;

typedef TNo *TLista;

int inserir(TLista *L, TLista *U, int num);
int remover(TLista *L, TLista *U, int numero);
int alterar(TLista L, int velho, int novo);
TLista pesquisar(TLista L, int num);
void exibir(TLista L);
void exibirAoContrario(TLista U);
int menu();

int main()
{
	setlocale(LC_ALL, "");
	TLista L = NULL;
	//TLista L2 = NULL;
	TLista U = NULL;
	int num1, num2, op;
	TLista pos;

	do
	{
		system("cls");
		op = menu();

		switch (op)
		{
		case 1:
			printf("Entre com o n�mero: ");

			scanf("%d", &num1);

			(inserir(&L, &U, num1)) ? printf("Inser��o realizada!\n") : printf("ERRO: Inser��o n�o realizada!\n");

			break;

		case 2:
			if (!L)
			{
				printf("Lista vazia!\n");

				break;
			}

			printf("Entre com o n�mero a ser removido: ");

			scanf("%d", &num1);

			pos = (pesquisar(L, num1));

			if (pos == NULL)
			{
				printf("ERRO: O n�mero %d n�o se encontra na lista!\n", num1);

				break;
			}

			(remover(&L, &U, num1)) ? printf("Remo��o realizada %i vezes!\n", remover(&L, &U, num1)) : printf("ERRO: Remo��o n�o realizada!\n");

			break;

		case 3:
			if (!L)
			{
				printf("Lista vazia!\n");

				break;
			}

			printf("Entre com o n�mero a ser alterado: ");

			scanf("%d", &num1);

			printf("Entre com o novo n�mero: ");

			scanf("%d", &num2);

			(alterar(L, num1, num2)) ? printf("Altera��o realizada!\n") : printf("ERRO: Altera��o n�o realizada!\n");

			break;

		case 4:
			if (!L)
			{
				printf("Lista vazia!\n");

				break;
			}

			printf("Entre com o n�mero a ser pesquisado: ");

			scanf("%d", &num1);

			pos = pesquisar(L, num1);

			(pos != NULL) ? printf("O n�mero %d foi encontrado na lista!\n", num1) : printf("ERRO: O n�mero %d n�o se encontra na lista!\n", num1);

			break;

		case 5:
			if (!L)
			{
				printf("Lista vazia!\n");

				break;
			}

			printf("Lista: ");

			exibir(L);

			printf("\n");

			break;

		case 6:
			if (!U)
			{
				printf("Lista vazia!\n");

				break;
			}

			printf("Lista: ");

			exibirAoContrario(U);

			printf("\n");

			break;

		case 7:
			printf("Fim do programa!\n");

			break;

		default:
			printf("Op��o inv�lida!\nTente novamente!\n");
		}

		system("pause");
	} while (op != 7);
}

int menu()
{
	int opcao;

	printf("Menu de op��es:\n\n");
	printf("(1)\tInserir\n\n(2)\tRemover\n\n(3)\tAlterar\n\n");
	printf("(4)\tPesquisar\n\n(5)\tExibir na ordem natural\n\n");
	printf("(6)\tExibir na prdem inversa\n\n(7)\tSair\n\n\n");
	printf("Entre com a op��o: ");
	scanf("%d", &opcao);

	return opcao;
}

int inserir(TLista *L, TLista *U, int num)
{
	TLista aux = (TLista)malloc(sizeof(TNo));

	if (!aux)
	{
		return FALSE;
	}
	else
	{
		aux->valor = num;
		aux->prox = *L;
		aux->ant = NULL;

		(*L) ? (*L)->ant = aux : *U = aux;

		*L = aux;

		return TRUE;
	}
}

int remover(TLista *L, TLista *U, int numero)
{
	TLista aux1, aux2, aux3;

	int cont;

	while ((*L) && ((*L)->valor == numero))
	{
		aux2 = (*L)->ant;

		aux1 = (*L)->prox;

		free(*L);

		cont++;

		*L = aux1;

		(*L) ? (*L)->ant = aux2 : 0;
	}

	if (!*L)
	{
		*U = NULL;
	}
	else
	{
		aux2 = *L;

		aux1 = (*L)->prox;

		while (aux1)
		{
			if (aux1->valor == numero)
			{
				aux3 = aux2;

				(*U == aux1) ? *U = aux3 : 0;

				(aux1->prox) ? aux1->prox->ant = aux2 : 0;

				aux2->prox = aux1->prox;

				free(aux1);

				cont++;

				aux1 = aux2->prox;
			}
			else
			{
				aux2 = aux1;

				aux1 = aux1->prox;
			}
		}
	}

	return cont;
}

int alterar(TLista L, int velho, int novo)
{
	if (!L)
		return 0;

	if (L->valor == velho)
	{
		L->valor = novo;

		return (1 + alterar(L, velho, novo));
	}

	return alterar(L->prox, velho, novo);
}

TLista pesquisar(TLista L, int num)
{
	if (L == NULL)
		return NULL;

	if (L->valor == num)
		return L;

	pesquisar(L->prox, num);
}

void exibir(TLista L)
{
	Ttamanho = 0;
	if (L)
	{
		printf("%d ", L->valor);
		exibir(L->prox);
	}
}

void exibirAoContrario(TLista U)
{
	if (U)
	{
		printf("%d ", U->valor);
		exibirAoContrario(U->ant);
	}
}
