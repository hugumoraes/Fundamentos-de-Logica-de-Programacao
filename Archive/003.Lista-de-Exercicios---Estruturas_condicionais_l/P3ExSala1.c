#include <stdio.h>

int main()
{
    float base, altura, perimetro, area;

    printf("Qual a base do retangulo? \n");
    scanf("%f", &base);
    printf("Qual a altura do retangulo? \n");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);

    if (area > perimetro)
    {
        printf("A area eh maior que o perimetro");
    }
    if (area == perimetro)
    {
        printf("A area eh igual ao perimetro");
    }
    if (area < perimetro)
    {
        printf("A area eh menor que o perimetro");
    }
}