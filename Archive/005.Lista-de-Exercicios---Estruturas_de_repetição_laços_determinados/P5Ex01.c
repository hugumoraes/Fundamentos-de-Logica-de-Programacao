#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite um numero entre 1 e 10 para saber sua tabuada\n");
    scanf("%d", &n);

    if (n <= 10)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d x %d = %d\n", n, i, (n * i));
        }
    }
    else
    {
        printf("Voce digitou um numero invalido");
    }

    return 0;
}