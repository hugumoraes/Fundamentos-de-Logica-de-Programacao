#include <stdio.h>

int main () {
    /*
        1. Include stdio
        2. Ponto e virgula no aux
        3. Aspas no printf
        4. Scanf usa % na string
        5. Variável está digitada diferente da declaração
        6. Printf não tem &
        7. Ponto e vírgula depois do 0
    */

    int aux;

    printf("Digite um numero inteiro: ");
    scanf("%d", &aux);
    printf("%d" ,aux);
    return 0;
}