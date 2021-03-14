#include <stdio.h>

int main() {
    int maior = 0, entrada;

    while(entrada >= 0){
        printf("Digite um numero: \n");
        scanf("%d", &entrada);

        if(entrada > maior) {
            maior = entrada;
        }
    } 

    printf("Maior valor digitado: %d", maior);

    return 0;
}