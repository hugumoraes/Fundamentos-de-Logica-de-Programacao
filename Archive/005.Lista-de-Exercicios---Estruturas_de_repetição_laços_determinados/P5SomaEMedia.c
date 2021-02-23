#include <stdio.h>

int main(void)
{
    float input, soma = 0;
    int i = 0;

    while (i < 5)
    {
        printf("Digite um numero: \n");
        scanf("%f", &input);
        soma += input;
        i++;
    }

    printf("A soma eh: %.2f e a media eh: %.2f", soma, (soma / 5));

        return 0;
}