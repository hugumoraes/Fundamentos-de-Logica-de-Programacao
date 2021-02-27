#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, maior;

    printf("Digite um numero: \n");
    scanf("%d", &a);
    printf("Digite um numero: \n");
    scanf("%d", &b);
    printf("Digite um numero: \n");
    scanf("%d", &c);
    

    maior = ( a + b + abs( a - b ) ) / 2;
    maior = ( maior + c + abs( maior - c ) ) / 2; 

    printf("Maior: %d", maior);

    return 0;
}