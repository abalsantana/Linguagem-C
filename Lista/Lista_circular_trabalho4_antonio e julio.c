//-----------------------------------------------------------------------------
// Fundamentos de Programação - FPR - 2020/1
// Professor Leonardo Vianna
//
// Implementação de listas circulares
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//
//	JULIO CESAR GONÇALVES DOS SANTOS
//
//	ANTONIO BALBINO SANTANA DOS SANTOS
//
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Definição de constantes
#define TRUE 1           
#define FALSE 0

//Definição de tipos
typedef struct No {      
   int valor;
   struct No *prox;
} TNo;

typedef TNo* TLista;	

//Protótipos das funções
int inserir (TLista *L, int num);
int remover (TLista *L, int num);
int alterar (TLista L, int num1, int num2);
void exibir (TLista L);
TLista buscar (TLista L, int num);

int menu ();

//----------------------------Implementação da Main-----------------------------
int main(void)
{
	//declaração de variáveis
	int opcao, num1, num2;
   	TLista pos, L = NULL;
   	setlocale(LC_ALL,"");
   
   	do 
	{
		opcao = menu ();
      
      	switch (opcao) 
		{
			//Inserir    
         	case 1: printf ("Entre com o número a ser inserido: ");
                    scanf ("%d", &num1);
                 
                 	if (inserir (&L, num1)) 
					{
						printf ("Elemento inserido com sucesso!\n");
                 	} 
					else 
					{
						printf ("ERRO: Elemento não inserido!\n");
                 	}
                 	break;
                 
         	//Remover    
         	case 2: printf ("Entre com o número a ser removido: ");
                 	scanf ("%d", &num1);
                 
                 	if (remover (&L, num1)) 
					{
						printf ("Elemento removido com sucesso!\n");
                 	} 
					else 
					{
						printf ("ERRO: Elemento não removido!\n");
                 	}
                 	break;
                 
         	//Alterar    
         	case 3: printf ("Entre com o número a ser alterado: ");
                 	scanf ("%d", &num1);
                 
                 	printf ("Entre com o novo número: ");
                 	scanf ("%d", &num2);
                 
                 	if (alterar (L, num1, num2)) 
					{
						printf ("Elemento alterado com sucesso!\n");
                 	} 
					else 
					{
						printf ("ERRO: Elemento não alterado!\n");
                 	}
                 	break;
                 
         	//Buscar    
         	case 4: printf ("Entre com o número a ser buscado: ");
                 	scanf ("%d", &num1);
                 
                 	pos = buscar (L, num1);
                 
                 	if (pos) 
					{
						printf ("Elemento encontrado na lista!\n");
                 	} 
					else 
					{
						printf ("ERRO: Elemento não encontrado!\n");
                 	}
                 	break;
                
         	//Exibir
         	case 5: exibir (L);
         			printf("\n");
                 	break;
                 
         	//Sair
         	case 6: printf ("Fim do programa!\n");
                 	break; 
                 
         	//Opção inválida
         	default: printf ("Opção inválida! Tente novamente!\n");                 
      }
      
      system ("pause");
   }
   while (opcao != 6);
   
   return 0;
}

//--------------Implementação das funções de manipulação da lista---------------

int inserir (TLista *L, int num)
{
	TLista aux = (TLista) malloc (sizeof(TNo));
   
   	if (!aux)
   	{
   		return FALSE;
   	}
   	else
   	{
   		aux->valor = num;
         
      	if (*L) 
      	{
      		aux->prox = (*L)->prox;
         	(*L)->prox = aux;
      	}
      	else 
      	{
      		*L = aux;
      		(*L)->prox = aux;
      	}
         
     	return TRUE;
   	}
}

int remover (TLista *L, int num)
{
	TLista aux1, aux2;
   	int c = 0;
   	int andou = FALSE;
   
   	aux2 = *L;
   	aux1 = (*L)->prox;
      
   	do
   	{
    	if (aux1->valor == num)
      	{
        	if (aux1 == aux2)                  
         	{
            	*L = NULL;
         	}	 
         	else
         	{   
            	aux2->prox = aux1->prox;
         
            	if (aux1 == *L)
            	{
               		*L = aux1->prox;
            	}
         	}
         
         	free (aux1);
         	c++;
    
	     	if (*L)
         	{
            	aux1 = aux2->prox;
         	}
      	}
      	else
      	{
         	aux2 = aux1;
         	andou = TRUE;
         	aux1 = aux1->prox;
      	}
   	}
   	while (((aux2 != *L) || (!andou)) && (*L));
   
   	return c;
}

int alterar (TLista L, int num1, int num2)
{
	//declaração de variáveis
	TLista i;	
	int cont=0;		//contará o número de alterações realizadas 

	//i começa apontando para o primeiro nó da lista L	
	i = L;
	
	//enquanto o ponteiro i não "voltar" ao primeiro nó da lista (ou seja, L)
		do
	{
		//se o elemento a ser alterado for encontrado...
		if (i->valor == num1)
		{
			//alteração sendo feita e contabilizada
			i->valor = num2;
			cont++;
		}
		
		//ponteiro i segue para o próximo nó da lista
		i = i->prox;
	}	while (i != L);
	
	//retornando a quantidade de alterações realizadas
	return cont;
}

TLista buscar (TLista L, int num)
{
	TLista i=L;	// iguala "i" ao primeiro nó.
	    	do
	    {
			if (L->valor==num)//se valor armazenado no L da vez for igual ao num procurado...
			{
				return L; //...retorna L
			}
			L=L->prox;// avança L enquanto..
	    }	while(L!=i);//...L for diferente do primeiro nó (i).
	    
	    return NULL;
}

void exibir (TLista L)
{
	TLista i=L;	// iguala "i" ao primeiro nó.
	    	do
	    {
			printf("%d\t", L->valor); //imprime valor de L enquanto...
			L=L->prox;			
	    }	while(L!=i);//...L for diferente do primeiro nó (i). 
}

int menu ()
{
	int op;
    
   	system ("cls");
   	printf ("Menu de Operações:\n\n");
   	printf ("1) Inserir\n2) Remover\n3) Alterar\n");
   	printf ("4) Buscar\n5) Exibir\n6) Sair\n\n");
   	printf ("Entre com a opção: ");
   
   	scanf ("%d", &op);
   	return op;
}