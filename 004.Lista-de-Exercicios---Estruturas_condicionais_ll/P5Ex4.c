#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    time_t comeco, fim;

    int n1, n2, op, result, input;
    double seconds;

    n1 = (rand() % 100) + 1;
    n2 = (rand() % 100) + 1;

    op = (rand() % 4) + 1;

    switch (op)
    {
    case 1:
        printf("Digite o valor da soma entre %d e %d\n", n1, n2);
        result = n1 + n2;
        break;
    case 2:
        printf("Digite o valor da subtracao entre %d e %d\n", n1, n2);
        result = n1 - n2;
        break;
    case 3:
        printf("Digite o valor da multiplicacao entre %d e %d\n", n1, n2);
        result = n1 * n2;
        break;
    case 4:
        printf("Digite o valor da divisao entre %d e %d\n", n1, n2);
        result = n1 / n2;
        break;
    default:
        break;
    }

    comeco = time(NULL);
    scanf("%d", &input);
    fim = time(NULL);

    seconds = difftime(fim, comeco);

    if (input == result)
    {
        printf("Resposta correta\nTempo de resposta: %.3lf segundos", seconds);
    } else {
        printf("Resposta incorreta\nTempo de resposta: %.3lf segundos", seconds);
    }
    
    return 0;
}