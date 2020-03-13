#include <stdio.h>

int main () {
    float base, altura, perimetro, area;

    printf("Qual eh a base do retangulo? \n");
    scanf("%f" ,&base);
    printf("Qual eh a altura do retangulo? \n");
    scanf("%f" ,&altura);

    perimetro = (2*base) + (2*altura);
    area = base * altura;

    if (perimetro > area)
    {
        printf("O perimetro eh maior que a area");
    } else {
        printf("A area eh maior que o perimetro");
    }
    
}