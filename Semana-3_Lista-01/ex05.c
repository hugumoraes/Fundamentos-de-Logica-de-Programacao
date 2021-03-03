#include <stdio.h>

int main() {
    int a, b, c;
    float delta, raiz1, raiz2, temp, sqrt;

    printf("Digite o a da equacao: \n");
    scanf("%d", &a);
    printf("Digite o b da equacao: \n");
    scanf("%d", &b);
    printf("Digite o c da equacao: \n");
    scanf("%d", &c);

    delta = (b*b) - (4 * a * c);
    sqrt = delta / 2;

    while(sqrt != temp) {
        temp = sqrt;
        sqrt = (delta / temp + temp) / 2;
    }

    raiz1 = ((- b) + sqrt) / (2 * a) ;
    raiz2 = ((- b) - sqrt) / (2 * a);

    printf("raiz 1: %.2f raiz 2: %.2f", raiz1, raiz2);
    return 0;
}