//Para n1=2 n2=4 aux=3.0
//Para n1=2 e n2=3 aux = 2.0

#include <stdio.h>

int main()
{
    int n1, n2;
    float aux;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);

    aux = (n1 + n2) / 2;

    printf("%.1f", aux);

    return 0;
}