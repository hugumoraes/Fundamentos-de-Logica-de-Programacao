#include <stdio.h>

int main()
{
    int a, b, c, qtdA, qtdB, qtdC, aux;
    printf("Digite respectivamente o numero de xiracas de farinha de trigo, ovos e de colheres de sopa de leite\n\n");
    scanf("%d%d%d", &a, &b, &c);

    qtdA = a / 2;
    qtdB = b / 3;
    qtdC = c / 5;

    aux = qtdA;
    if (qtdA > qtdB)
    {
        aux = qtdB;
    }
    if (qtdB > qtdC)
    {
        aux = qtdC;
    }

    printf("\n%d", aux);

    return 0;
}