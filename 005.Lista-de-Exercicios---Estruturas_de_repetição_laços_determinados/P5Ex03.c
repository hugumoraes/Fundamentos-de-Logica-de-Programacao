#include <stdio.h>

int main(void)
{
    int n1, n2, length, counter = 0;

    printf("Digite dois numeros inteiros\n");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        length = n1 - n2;
    }
    else if (n2 > n1)
    {
        length = n2 - n1;
    }

    if (length != 0)
    {
        for (int i = 0; i < length; i++)
        {
            if ((i % 2) == 1)
            {
                counter++;
            }
        }
        printf("Ha %d inteiros impares entre %d e %d", counter, n1, n2);
    }
    else
    {
        printf("Os numeros sao iguais, nao ha nenhum inteiro entre eles");
    }

    return 0;
}