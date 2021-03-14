#include <stdio.h>

int main() {
    float entrada, media, acumulado;
    int count = 0, positivos = 0;

    while (entrada != -1000)
    {
        printf("Digite um valor: \n");
        scanf("%f", &entrada);

        if(entrada >= 0) {
            positivos++;
            acumulado += entrada;
            count++;
        }
    }
    
    printf("\n%d valores positivos\n", positivos);
    printf("Media: %.1f", acumulado / count);

    return 0;
}