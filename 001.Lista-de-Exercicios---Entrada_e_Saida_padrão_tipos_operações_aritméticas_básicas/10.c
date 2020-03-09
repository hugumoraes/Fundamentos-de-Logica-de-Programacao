#include <stdio.h>

int main () {
    char letra;

    printf("Por favor, digite uma letra para ser convertida de maiuscula para minuscula: \n");
    scanf("%c" ,&letra);

    if (letra >= 65 && letra <= 90)
    {
        letra = letra + 32;
        printf("\n\nLetra convertida: %c" ,letra);
    }
    else
    {
        printf("\n\nLetra inv%clida" ,160);
    }
    

    return 0;
}