#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite tr%cs valores: \n", 136);
    scanf("%d%d%d", &a, &b, &c);

    int maiorAB = (a + b + abs(a - b)) / 2;
    int maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("Valor A: %d\nValor B: %d\nValor C: %d\n", a, b, c);
    if (maior == a)
    {
        printf("O maior valor %c A: %d", 130, maior);
    }
    if (maior == b)
    {
        printf("O maior valor %c B: %d", 130, maior);
    }
    if (maior == c)
    {
        printf("O maior valor %c C: %d", 130, maior);
    }
}