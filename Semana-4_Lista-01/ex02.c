#include <stdio.h>

int main()
{
    int n, i;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    for (i = 0; i <= 100; i++)
    {
        if (i % n == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}