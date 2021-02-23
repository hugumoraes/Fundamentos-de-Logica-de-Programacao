#include <stdio.h>

int main()
{
    float distancia, pedagio, combustivel, gasolina, total;

    printf("Digite a distancia entre as duas cidades em km: \n");
    scanf("%f", &distancia);
    printf("Digite a quantidade de pedagios no trajeto: \n");
    scanf("%f", &pedagio);

    total = ((distancia / 15.000) * 2.60) + (pedagio * 8.00);

    printf("Distancia: %.3fkm\nPedagio(s): %.0f\nTotal: R$%.2f\n", distancia, pedagio, total);
}