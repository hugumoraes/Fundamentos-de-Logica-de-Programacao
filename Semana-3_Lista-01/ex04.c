#include <stdio.h>

int main() {
    int base, altura, perimetro, area;

    printf("Digite a base do retangulo\n");
    scanf("%d", &base);
    printf("Digite a altura do retangulo\n");
    scanf("%d", &altura);

    perimetro = (2 * base) + (2 * altura);
    area = base * altura;

    if (perimetro > area) {
        printf("\nPerimetro maior que a area");
    } else if (perimetro == area) {
        printf("\nPerimetro igual a area");
    } else {
        printf("\nPerimetro menor que a area");
    }

}