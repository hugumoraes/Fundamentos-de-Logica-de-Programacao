#include <stdio.h>

int main(void)
{
    float salario, aliquota, imposto, mes;

    printf("Digite o valor do seu salario: \n");
    scanf("%f", &salario);
    printf("Digite o mes: \n");
    scanf("%f", &mes);

    if (mes < 4)
    {
        if (salario <= 1499.15)
        {
            printf("Voce esta isento do imposto de renda");
        }
        else if (salario > 1499.15 && salario <= 2246.75)
        {
            imposto = (salario - 1499.16) * 0.075;
        }
        else if (salario > 2246.75 && salario <= 2995.70)
        {
            imposto = ((2246.75 - 1499.16) * 0.075) + ((salario - 2246.76) * 0.15);
        }
        else if (salario > 2995.70 && salario <= 3743.19)
        {
            imposto = ((2246.75 - 1499.16) * 0.075) + ((2995.70 - 2246.76) * 0.15) + ((salario - 2995.70) * 0.225);
        }
        else
        {
            imposto = ((2246.75 - 1499.16) * 0.075) + ((2995.70 - 2246.76) * 0.15) + ((3743.19 - 2995.71) * 0.225) + ((salario - 3743.19) * 0.275);
        }
    }
    else
    {
        if (salario <= 1566.61)
        {
            printf("Voce esta isento do imposto de renda");
        }
        else if (salario > 1566.61 && salario <= 2347.85)
        {
            imposto = (salario - 1566.62) * 0.075;
        }
        else if (salario > 2347.86 && salario <= 3130.51)
        {
            imposto = ((2347.85 - 1566.62) * 0.075) + ((salario - 2347.86) * 0.15);
        }
        else if (salario > 3130.52 && salario <= 3911.63)
        {
            imposto = ((2347.85 - 1566.62) * 0.075) + ((3130.51 - 2347.86) * 0.15) + ((salario - 3130.51) * 0.225);
        }
        else
        {
            imposto = ((2347.85 - 1566.62) * 0.075) + ((3130.51 - 2347.86) * 0.15) + ((3911.63 - 3130.52) * 0.225) + ((salario - 3911.63) * 0.275);
        }
    }

    printf("O seu imposto eh: %.2f", imposto);

    return 0;
}