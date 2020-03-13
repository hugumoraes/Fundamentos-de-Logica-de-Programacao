#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Digite o valor de y: \n");
    scanf("%d", &y);

    if (((x >= 0) && (x <= 432)) && ((y >= 0) && (y <= 468)))
    {
        printf("A bola foi dentro\n");
    }
    else
    {
        printf("A bola foi fora\n");
    }

    return 0;
}