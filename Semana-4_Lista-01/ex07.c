#include <stdio.h>

int main()
{
    int entrada, n1 = 0, n2 = 1, aux = 0;

    printf("Digite um numero: ");
    scanf("%d", &entrada);

    printf("\n0 1 ");

    do
    {
        aux = n1 + n2;
        n1 = n2;
        n2 = aux;

        if(aux <= entrada) {
            printf("%d ", aux);
        }
        
    } while (entrada >= aux);

    return 0;
}