#include <stdio.h>

int main() {
    int i1, i2, divis, rest;

    printf("Digite o primeiro valor inteiro: \n");
    scanf("%d", &i1);
    printf("Digite o segundo valor inteiro: \n");
    scanf("%d", &i2);

    divis = i1 / i2;
    rest = i1 % i2;

    printf("Divisao: %d, Resto: %d", divis, rest);

    return 0;
}