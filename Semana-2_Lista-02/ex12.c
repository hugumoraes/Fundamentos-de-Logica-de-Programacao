#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, menor;

    printf("Digite um numero: \n");
    scanf("%d", &a);
    printf("Digite um numero: \n");
    scanf("%d", &b);
    printf("Digite um numero: \n");
    scanf("%d", &c);
    

    menor = ( a + b - abs( a - b ) ) / 2;
    menor = ( menor + c - abs( menor - c ) ) / 2; 

    printf("Menor: %d", menor);

    return 0;
}