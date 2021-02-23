#include <stdio.h>

int main(void)
{
    float input, soma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: \n");
        scanf("%f", &input);
        soma += input;
    }

    printf("A soma eh: %.2f e a media eh: %.2f", soma, (soma / 5));

        return 0;
}