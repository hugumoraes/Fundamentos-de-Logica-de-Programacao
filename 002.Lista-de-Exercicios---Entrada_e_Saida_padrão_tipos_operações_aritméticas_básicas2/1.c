#include <stdio.h>

int main()
{
    float base, altura, perimetro;

    printf("Digite a base do ret%cngulo: \n", 131);
    scanf("%f", &base);
    printf("Digite a altura do ret%cngulo: \n", 131);
    scanf("%f", &altura);

    perimetro = (2 * base) + (2 * altura);
    printf("O per%cmetro do ret%cngulo %c: %.1f", 161, 131, 130, perimetro);
}