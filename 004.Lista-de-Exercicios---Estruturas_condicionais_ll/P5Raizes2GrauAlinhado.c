#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, discriminante, raizA, raizB;

    printf("Digite os coeficientes a, b, c da raiz do segundo grau, respectivamente: \n");
    scanf("%f%f%f", &a, &b, &c);

    discriminante = (b * b) - (4 * a * c);
    raizA = (-(b) + sqrt(discriminante)) / 2;
    raizB = (-(b)-sqrt(discriminante)) / 2;

    if (discriminante < 0)
        printf("Nao eh possivel calcular as raizes porque elas nao existem\n");
    else if (discriminante == 0)
        printf("A raiz da equacao eh: %.2f", raizA);
    else
        printf("As raizes da equacao sao: %.2f %.2f", raizA, raizB);

    return 0;
}