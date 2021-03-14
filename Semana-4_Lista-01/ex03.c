#include <stdio.h>

int main() {
    int x, y, i, count = 0;

    printf("Digite o valor de x\n");
    scanf("%d", &x);
    printf("Digite o valor de y\n");
    scanf("%d", &y);

    if(x <= y) {
        printf("x deve ser maior que y\n");
        return 0;
    }

    for (i = y + 1; i < x; i++)
    {
        if(i % 2 == 1) {
            count++;
        }
    }
    
    printf("%d", count);

    return 0;
}