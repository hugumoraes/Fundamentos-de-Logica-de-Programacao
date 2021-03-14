#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um inteiro \n");
    scanf("%d", &n);
    printf("\n\n");

    for (i = 1; i <= 10; i++){
        printf("%d \n", (n * i));
    }

    return 0;
}