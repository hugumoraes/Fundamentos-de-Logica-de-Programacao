#include <stdio.h>

int main(void)
{
    float saldoMedio;
    printf("Digite o seu saldo medio: \n");
    scanf("%f", &saldoMedio);

    if (saldoMedio < 201)
    {
        printf("Voce nao possui direito a credito\n");
    }
    else if (saldoMedio >= 201 && saldoMedio < 401)
    {
        printf("Voce tem direito a %.2f reais de credito\n", saldoMedio * 1.2);
    }
    else if (saldoMedio >= 401 && saldoMedio <= 600)
    {
        printf("Voce tem direito a %.2f reais de credito\n", saldoMedio * 1.3);
    }
    else
    {
        printf("Voce tem direito a %.2f reais de credito\n", saldoMedio * 1.4);
    }

    return 0;
}