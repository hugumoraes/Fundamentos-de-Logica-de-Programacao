#include <stdio.h>

int main()
{
    int num1, num2, mmc, aux, i;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);    
    printf("Digite o segundo numero: \n");    
    scanf("%d", &num2);

    for (i = 2; i <= num2; i++)
    {
        aux = num1 * i;
        if ((aux % num2) == 0)
        {
            mmc = aux;
            i = num2 + 1;
        }
    }

    printf("MMC: %d", mmc);

    return 0;
}