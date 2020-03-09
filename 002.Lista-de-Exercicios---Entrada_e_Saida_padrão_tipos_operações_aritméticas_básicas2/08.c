#include <stdio.h>

int main()
{
    float temperaturaC, temperaturaF;

    printf("Digite uma temperatura em graus Celsius: \n");
    scanf("%f", &temperaturaC);

    temperaturaF = (9 * temperaturaC + 160) / 5;

    printf("Temperatura em C: %.1f\nTemperatura em F: %.1f", temperaturaC, temperaturaF);
}