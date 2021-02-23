#include <stdio.h>

int main(void)
{
    int n;
    float n1, n2, n3, media;

    printf("Digite o numero de casos de teste que deseja executar: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite tres valores reais para ver sua media ponderada: \n");
        scanf("%f%f%f", &n1, &n2, &n3);
        media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 8;
        printf("Media: %.2f\n", media);
    }
}