#include <stdio.h>

int main () {
    int idade;
    char inicial;
    float nota;

    printf("Qual a sua idade? \n");
    scanf("%d", &idade);
    printf("Qual a inicial do seu nome? \n");
    scanf(" %c", &inicial);
    printf("Qual sua media em fundamentos de programacao? \n");
    scanf("%f", &nota);
    printf("Inicial: %c \nIdade: %d \nNota: %f" ,inicial ,idade ,nota);

    return 0;
}