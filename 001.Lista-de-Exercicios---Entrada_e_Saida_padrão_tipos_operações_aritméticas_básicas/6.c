#include <stdio.h>

int main()
{
    int n1, n2, aux;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);

    aux = n1 % n2;

    printf("%d", aux);

    return 0;
}