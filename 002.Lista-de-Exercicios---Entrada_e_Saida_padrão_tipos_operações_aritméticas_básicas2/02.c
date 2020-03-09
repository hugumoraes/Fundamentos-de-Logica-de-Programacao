#include <stdio.h>

int main()
{
    float raio, volume;

    printf("Insira o valor do raio da esfera: \n");
    scanf("%f", &raio);

    volume = (4.0 / 3.0) * 3.14159 * (raio * raio * raio);
    printf("Volume: %.3f", volume);
}