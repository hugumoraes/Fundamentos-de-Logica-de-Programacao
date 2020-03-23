#include <stdio.h>

//Até o valor 31 o programa apresenta resultados consistentes

int main(void)
{
    int n, fat;

    printf("Digite um valor: \n");
    scanf("%d", &n);

    for (fat = 1; n > 1; n--)
    {
        fat = fat * n;
    }

    printf("%d", fat);

    return 0;
}