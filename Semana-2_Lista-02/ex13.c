#include <stdio.h>

int main() {
    int km;
    float litros;

    printf("Digite a kilometragem: \n");
    scanf("%d", &km);
    printf("Digite o numero de litros: \n");
    scanf("%f", &litros);    



    printf("Consumo medio: %.3f km/l", km / litros);

    return 0;
}