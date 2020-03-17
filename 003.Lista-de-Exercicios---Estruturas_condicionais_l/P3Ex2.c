#include <stdio.h>

int main(void)
{
    int ano;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if (((ano % 400) == 0) || (((ano % 4) == 0) && ((ano % 100) != 0)))
    {
        printf("O ano eh bissexto\n");
    }

    return 0;
}