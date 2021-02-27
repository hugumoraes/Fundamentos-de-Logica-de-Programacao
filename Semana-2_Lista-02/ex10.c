#include <stdio.h>

int main() {
    float raio, volume;
    float pi = 3.14159;

    printf("Digite o raio da esfera: \n");
    scanf("%f", &raio);
    

    volume = ( 4.0 / 3.0 ) * pi * ( raio * raio * raio ); 

    printf("Volume: %.2f", volume);

    return 0;
}