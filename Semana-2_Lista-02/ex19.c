#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite a nota um: \n");
    scanf("%f", &n1);
    printf("Digite a nota dois: \n");
    scanf("%f", &n2);
    printf("Digite a nota tres: \n");
    scanf("%f", &n3);
      
    printf("Media final: %.1f", ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10);

    return 0;
}