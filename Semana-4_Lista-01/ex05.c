#include <stdio.h>

int main()
{
    int entrada, i, soma = 0;

    printf("Digite um numero: \n");
    scanf("%d", &entrada);

    for (i = 1; i < entrada; i++)
    {
        if (entrada % i == 0)
        {
            soma += i;
        }
    }

    if (soma == entrada)
    {
        printf("O numero eh perfeito");
    }
    else
    {
        printf("O numero nao eh perfeito");
    }

    return 0;
}