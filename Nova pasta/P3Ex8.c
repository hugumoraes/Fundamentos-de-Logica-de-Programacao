#include <stdio.h>

int main(void)
{
    int a, b, c, ladoA, ladoB, ladoC;

    printf("Digite tres valores inteiros: \n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) // a>b
        if (b > c)
        {
            ladoA = a;
            ladoB = b;
            ladoC = c;
        }
        else if (a > c)
        {
            ladoA = a;
            ladoB = c;
            ladoC = b;
        }
        else
        {
            ladoA = c;
            ladoB = a;
            ladoC = b;
        }

    else if (b > c) // b>=a,b>c
        if (a > c)
        {
            ladoA = b;
            ladoB = a;
            ladoC = c;
        } // b>=a>c
        else
        {
            ladoA = b;
            ladoB = c;
            ladoC = a;
        }

    else
    {
        ladoA = c;
        ladoB = b;
        ladoC = a;
    }

    printf("Lado A: %d\nLado B: %d\nLado C: %d\n\n", ladoA, ladoB, ladoC);

    if (ladoA >= (ladoB + ladoC))
        printf("Nao forma triangulo\n");
    else if ((ladoA * ladoA) == (ladoB * ladoB) + (ladoC * ladoC))
        printf("Triangulo retangulo");
    else if ((ladoA * ladoA) > (ladoB * ladoB) + (ladoC * ladoC))
        printf("Triangulo obtusangulo");
    else if ((ladoA * ladoA) < (ladoB * ladoB) + (ladoC * ladoC))
        printf("Triangulo acutangulo");
    if (ladoA == ladoB && ladoA == ladoC)
        printf("\nTriangulo equilatero");
    else if (ladoA == ladoB || ladoB == ladoC || ladoC == ladoA)
        printf("\nTriangulo isosceles");

    return 0;
}
