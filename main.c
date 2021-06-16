#include <stdio.h>
#include <stdlib.h>

int main()
{

    int pares[10] = {};
    int impares[10] = {};
    int total[10] = {};
    int numeros;
    int num = 0;

    while (num < 10)
    {
        printf("digite o %d numero: \n", (num + 1));
        scanf("%d\n", &numeros);

        if ((numeros % 2) == 0)
        {
            //for (int i = 0; i < 10; i++)
            {
                pares[num] = numeros;
                //printf("%d\n", pares[num]);
            }
        }

        if ((numeros % 2) == 1)
        {
            //for (int i = 0; i < 10; i++)
            {
                impares[num] = numeros;
            }
        }
        num++;
        printf("%d\n%d",pares[num], impares[num]);
    }
    return 0;
}
