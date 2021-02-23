#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    numero = numero % 10;

    printf("O ultimo digito eh: %d", numero);
}