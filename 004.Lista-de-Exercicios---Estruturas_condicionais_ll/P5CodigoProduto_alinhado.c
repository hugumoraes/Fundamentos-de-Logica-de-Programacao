#include <stdio.h>

int main(void)
{
    char cod_prod;
    printf("Por favor, forneca o codigo do produto: (A a D)\n");
    scanf("%c", &cod_prod);

    if (cod_prod == 'A')
        printf("Lampada 60W e o valor total eh: R$%.2f\n", 1.2 * 7);
    else if (cod_prod == 'B')
        printf("Lampada 100W e o valor total eh: R$%.2f\n", 2.5 * 5);
    else if (cod_prod == 'C')
        printf("Reator de partida lenta e o valor total eh: R$%d\n", 59 * 3);
    else if (cod_prod == 'D')
        printf("Reator de partida rapida e o valor total eh: R$%d\n", 124 * 2);
    else
        printf("Produto nao disponivel no estoque\n");

    printf("Fim do programa");

    return 0;
}