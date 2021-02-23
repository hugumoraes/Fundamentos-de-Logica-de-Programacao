#include <stdio.h>

int main() {
    printf("Esse eh um programa de saida de dados!!! \n");
    printf("A seguir alguns exemplos com a funcao printf: \n");
    printf("%d\n", 65);

    // %c can't hold integer
    // printf("%c\n", 65);

    // & is supposed to find the address to a variable
    // printf("%d\n", &65);

    printf("%c\n", 'A');

    // %d holds integer values 
    // printf("%d\n", 'A');
    
    printf("%d\n", 10);
    printf("\n\n\n");
    printf("Fim do Programa!!!");

    return 0;
}