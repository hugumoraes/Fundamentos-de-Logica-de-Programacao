//Número 104
//Não é um erro, é o número do caracter na tabela ASCII

#include <stdio.h>

int main () {
    char aux;

    printf("Digite um caracter: ");
    scanf("%c", &aux);
    printf("%d", aux);

    return 0;
}