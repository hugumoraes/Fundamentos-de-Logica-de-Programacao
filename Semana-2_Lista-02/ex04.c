#include <stdio.h>

int main() {
    char c;
    int i;
    float f;

    printf("Digite um inteiro\n");
    scanf("%d", &i);
    printf("Digite um char\n");
    scanf(" %c", &c);
    printf("Digite um float\n");
    scanf("%f", &f);

    printf("Char: %c, Int: %d, Float: %.2f", c, i, f);

    return 0;
}