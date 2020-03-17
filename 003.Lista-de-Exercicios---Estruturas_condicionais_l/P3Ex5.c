#include <stdio.h>

int main(void)
{
    int inicio, fim, aux, total;

    printf("Digite a hora de inicio e do fim do jogo, respectivamente\n");
    scanf("%d%d", &inicio, &fim);

    if (inicio > fim)
    {
        total = (24 - inicio) + fim;
    }
    else if (inicio == fim)
    {
        total = 24;
    }
    else
    {
        total = fim - inicio;
    }

    printf("O jogo durou %d hora(s)", total);

    return 0;
}