#include <stdio.h>

int main(void)
{
    int n, fib1 = 0, fib2= 1, sum;

    printf("Digite quantos digitos deseja ver da sequencia de fibonacci\n");
    scanf("%d", &n);

    printf("0 1 ");
    
    for (int i = 0; i < n - 2; i++)
    {
        sum = fib1 + fib2;
        int aux = fib1;
        fib1 = fib2;
        fib2 = sum;
        printf("%d ", sum);
    }

    return 0;
}