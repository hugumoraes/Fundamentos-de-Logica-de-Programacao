#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);

    for (int i = 0; i < 100; i++)
    {
        if ((i % n) == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}