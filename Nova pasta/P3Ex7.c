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

    printf("%d %d %d", ladoC, ladoB, ladoA);

        return 0;
}