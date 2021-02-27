#include <stdio.h>

int main() {
    float n;

    printf("Digite a temperatura em graus Celsius: \n");
    scanf("%f", &n);
      
    printf("%.2f graus Farenheit (F): ", ((9*n) + 160) / 5 );

    return 0;
}