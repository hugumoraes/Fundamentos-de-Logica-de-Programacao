#include <stdio.h>

int main() {
    int entrada, fatorial, i;

    printf("Digite um numero\n");
    scanf("%d", &entrada);

    fatorial = entrada;

    for (i = entrada - 1; i > 0; i--)
    {
        fatorial = i * fatorial;
    }
    

    
    printf("Fatorial de %d = %d", entrada, fatorial);

    return 0;
}

// Ate o valor 16