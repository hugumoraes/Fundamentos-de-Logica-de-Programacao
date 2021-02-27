#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite o primeiro valor inteiro: \n");
    scanf("%f", &n1);
    printf("Digite o segundo valor inteiro: \n");
    scanf("%f", &n2);

    media = ( n1 + n2 ) / 2;

    printf("Media: %.2f", media);

    return 0;
}