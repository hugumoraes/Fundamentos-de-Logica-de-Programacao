#include <stdio.h>

int main() {
    int n;

    printf("Digite um inteiro: \n");
    scanf("%d", &n);
      
    printf("%d = %d cedulas de 50, %d cedulas de 5 e %d cedulas de 1", n, n / 50, ( n % 50 ) / 5, ( n % 50 ) % 5);

    return 0;
}