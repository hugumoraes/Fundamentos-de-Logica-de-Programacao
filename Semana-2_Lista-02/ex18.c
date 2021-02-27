#include <stdio.h>

int main() {
    float distancia, pedagios;

    printf("Digite a quantidade de pedagios: \n");
    scanf("%f", &pedagios);
    printf("Digite a distancia: \n");
    scanf("%f", &distancia);
      
    printf("Total da viagem: R$%.2f", ((distancia / 15) * 2.60) + (pedagios * 8.00));

    return 0;
}