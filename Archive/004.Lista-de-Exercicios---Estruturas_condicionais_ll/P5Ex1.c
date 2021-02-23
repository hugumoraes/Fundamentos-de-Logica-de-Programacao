#include <stdio.h>

int main(void)
{
    int n, t1, t2, t3, aux;

    printf("Digite um numero inteiro de 100 a 999: \n");
    scanf("%d", &n);
    if (n < 100 || n > 999)
    {
        printf("Voce nao digitou um numero entre 100 e 999");
    }
    else
    {
        t1 = n % 10;
        t2 = (n / 10) % 10;
        t3 = (n / 100) % 10;

        aux = (t1*t1*t1) + (t2*t2*t2) + (t3*t3*t3);
        if (aux == n)
        {
            printf("O numero %d eh um numero de Angstron!\n" ,n);
        }
        
    }

    return 0;
}