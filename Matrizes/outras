#include <stdio.h>
#include <stdlib.h>
#define TAM 2
//1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

void preenche(int X[TAM][TAM]){
//int v[TAM][TAM];
int i, j, cont=0;
 for(i=0;i<TAM;i++){
   for(j=0;j<TAM;j++){
    printf("Entre com os pares [%d, %d] da matriz: \n",i,j);
    scanf("%d",&X[i][j]);
   }
 }
}

int exibe(int X[TAM][TAM]){
  int i, j;
  for(i=0;i<TAM;i++){
    for(j=0;j<TAM;j++){
      printf("%d ",X[i][j]);
    }
      printf("\n");
  }
}

//valores maiores que 10
int maiores10(int X[TAM][TAM]){
  int i, j, cont=0,total=0;
  for(i=0;i<TAM;i++){
    for(j=0;j<TAM;j++){
      if(X[i][j]>10){
        cont++;
        printf("%d ",X[i][j]);
      }
    }
  }
   return cont;
}

int main(void) {
int X[TAM][TAM];
preenche(X);
exibe(X);
printf("\nvalores maiores que 10: %d\n",maiores10(X));
  return 0;
}
