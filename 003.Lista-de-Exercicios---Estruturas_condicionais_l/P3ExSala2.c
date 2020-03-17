#include <stdio.h>
#include <math.h>

int main()
{
    float base, altura, perimetro, area, hipotenusa, raio, maior;

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

    hipotenusa = sqrtl((base*base) + (altura*altura));
    raio = (base + altura - hipotenusa) /2;

    printf("\nA hipotenusa eh: %.2f" ,hipotenusa);
    printf("\nO raio da circunferencia inscrita eh: %.2f" ,raio);

    
    
}