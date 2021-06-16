Em C e C++, além de ponteiros normais é possível criar ponteiros para funções. Assim como um ponteiro normal aponta para uma região de memória de onde você pode ler ou escrever um valor, um ponteiro para função aponta para uma função, que pode ser chamada como uma função normal.

//func é uma funão normal
void func(int x) { ... }

//func_ptr é um ponteiro para função void que aceita um int de parâmetro 
void (*func_ptr)(int); 

//func_ptr passa a apontar para func
func_ptr = &func;

//chama func, através do ponteiro
func_ptr(42);
O uso do & antes do nome da função é opcional, geralmente só se usa o nome dela mesmo.

A sintaxe para declarar ponteiros de função não é muito complicada. Basicamente é:

<tipo-de-retorno> ( *<nome-da-variável> ) ( <parâmetros> )
Os parênteses são importantes para indicar que o * está ligado à variável. Sem eles seria declarada uma função normal que retorna um ponteiro.

// ponteiro de função que aceita char* e retorna int 
int (*fun_ptr)(char *); 

// função que aceita char* e retorna int* 
int *fun_ptr(char *); 
Para facilitar um pouco, pode-se usar typedefs

// FuncPtr é um ponteiro para funções que recebem e retornam char*
typedef char *(*FuncPtr)(char *);

// Cria um ponteiro de função e atribui a função gets a ele
FunPtr ptr = gets;
Além de variáveis como no exemplo, é possível declarar parâmetros de função, como no caso citado na pergunta. Assim é possível customizar algoritmos, passando partes variáveis deles como função.

#include <stdio.h>

int soma(int a, int b) { return a + b; }
int multiplica(int a, int b) { return a * b; }

typedef int (*Operacao)(int,int);

//Executa uma operação binária sobre dois operandos
int opera(int a, int b, Operacao op) {
  return op(a,b);
}

int main() {
  printf("%d\n", opera(3, 4, soma));       //imprime 7
  printf("%d\n", opera(3, 4, multiplica)); //imprime 12
}