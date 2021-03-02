#include <stdio.h>

int main() {
    int alunos, monitores, total;

    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &alunos);
    printf("Digite a quantidade de monitores: \n");
    scanf("%d", &monitores);

    total = alunos + monitores;

    if(total <= 50) {
        printf("Todas as pessoas podem ir em apenas uma viagem");
    } else {
        printf("Precisara de mais viagens para levar todas as pessoas");
    }

    return 0;
}