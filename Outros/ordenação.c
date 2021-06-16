#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    int aux = 0;
    int v[] = {5, 10, 3, 9, 1};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for(int i = 0; i< 5; i++){
        printf("Posicao %d eh: %d\n", i, v[i]);
    }

    return 0;
}
