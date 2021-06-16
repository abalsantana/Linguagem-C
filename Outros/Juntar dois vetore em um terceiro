#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int vet1[5];
    int vet2[5];
    int vet3[10];

    int i = 0;
    int j = 0;
    int temp = 0;

    printf("Digite os números do vetor 1: \n\n");
    for ( i = 0; i < 5; i++ )
        scanf( "%d", &vet1[i] );

    printf("Digite os números do vetor 2: \n\n");
    for ( i = 0; i < 5; i++ )
        scanf( "%d", &vet2[i] );

    for ( i = 0; i < 5; i++ )
        vet3[i] = vet1[i];

    for ( i = 5; i < 10; i++ )
        vet3[i] = vet2[i-5];

    printf("[desordenado] vetor3: \n\n");
    for ( i = 0; i < 10; i++ )
        printf( "%d \n", vet3[i] );

    /**
        Ordenacao do vetor
    **/
    temp = vet3[0]; /* Inicializa variavel de comparacao */
    for ( i = 0; i < 10; i++ )
        for ( j = i; j < 10; j++ )
            if ( vet3[j] < vet3[i]  )
            {
                temp = vet3[j];
                vet3[j] = vet3[i];
                vet3[i] = temp;
            }

    printf("[ordenado] vetor3: \n\n");
    for ( i = 0; i < 10; i++ )
            printf( "%d \n", vet3[i] );

    system("PAUSE");

    return 0;
}