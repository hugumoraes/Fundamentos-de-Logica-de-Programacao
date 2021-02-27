#include <stdio.h>

int main() {
    float n1, n2, perimetro;

    printf("Digite a base do retangulo: \n");
    scanf("%f", &n1);
    printf("Digite a altura do retangulo: \n");
    scanf("%f", &n2);

    perimetro = ( n1 * 2 ) + ( n2 * 2 );

    printf("Perimetro: %.2f", perimetro);

    return 0;
}