#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;

    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    for (i = 1; i < n + 1; i++)
    {
        if (((n % i) == 0) && n != i)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("O numero eh perfeito");
    }
}
