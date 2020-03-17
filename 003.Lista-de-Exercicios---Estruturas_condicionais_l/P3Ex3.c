#include <stdio.h>

int main(void)
{
    float x, y;

    printf("Digite o valor par cartesiano (x,y)\n");
    scanf("%f%f", &x, &y);

    if ((x == 0) && (y == 0))
    {
        printf("Voce esta na origem");
    }
    else if ((x == 0) && (y != 0))
    {
        printf("Voce esta no eixo das abscissas");
    }
    else if ((x != 0) && (y == 0))
    {
        printf("Voce esta no eixo das ordenadas");
    }
    else if (x > 0 && y > 0)
    {
        printf("Voce esta no 1 quadrante");
    }
    else if (x < 0 && y > 0)
    {
        printf("Voce esta no 2 quadrante");
    }
    else if (x < 0 && y < 0)
    {
        printf("Voce esta no 3 quadrante");
    }
    else
    {
        printf("Voce esta no 4 quadrante");
    }

    return 0;
}