#include <stdio.h>

int main()
{
    int dinheiro, cedulas50, cedulas5, cedulas1;

    printf("Por favor, informe um n%cmero inteiro: \n", 163);
    scanf("%d", &dinheiro);

    cedulas50 = dinheiro / 50;
    cedulas5 = (dinheiro % 50) / 5;
    cedulas1 = (dinheiro % 50) % 5;

    printf("Cedulas de 50: %d\nCedulas de 5: %d\nCedulas de 1: %d\n", cedulas50, cedulas5, cedulas1);
}