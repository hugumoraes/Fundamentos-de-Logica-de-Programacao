#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, r1, r2, discriminante;

    printf("Por favor forneca os tres coeficientes da equacao de segundo grau: \n");
    scanf("%f%f%f", &a, &b, &c);

    discriminante = (b * b) - 4 * a * c;
    if (discriminante < 0)
    {
        printf("Nao eh possivel encontrar as raizes, o discriminante eh negativo\n");
    }
    else
    {
        r1 = (-b + (sqrt((b * b - 4 * a * c)))) / (2 * a);
        r2 = (-b - (sqrt((b * b - 4 * a * c)))) / (2 * a);

        printf("Raiz A: %f\nRaiz B: %f", r1, r2);
    }

    printf("Fim do programa");
}