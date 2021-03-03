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

    delta = (b * b) - (4.0 * a * c);

    if (delta < 0) {
        printf("O delta eh negativo, portanto, nao ha raiz real.");
        return 0;
    } else if (delta == 0) {
        raiz1 = (-b) / (2.0 * a);
        printf("A raiz eh: %.2f", raiz1);
        return 0;
    } else {
        sqrt = delta / 2;

        while(sqrt != temp) {
            temp = sqrt;
            sqrt = (delta / temp + temp) / 2;
        }

        raiz1 = ((- b) + sqrt) / (2.0 * a) ;
        raiz2 = ((- b) - sqrt) / (2.0 * a);
        printf("raiz 1: %.2f raiz 2: %.2f", raiz1, raiz2);
        return 0;
    }
}