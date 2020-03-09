#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    printf("Digite em sequencia o valor das suas tres notas: (n1, n2, n3) \n");
    scanf("%f%f%f", &n1, &n2, &n3);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    printf("Sua media eh: %.1f", media);
}