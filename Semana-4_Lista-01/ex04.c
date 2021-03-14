#include <stdio.h>

int main()
{
    int tests, input1, input2, input3;
    float output;

    printf("Digite o numero de testes desejados\n");
    scanf("%d", &tests);

    for (tests; tests > 0; tests--)
    {
        printf("Digite o primeiro valor: \n");
        scanf("%d", &input1);
        printf("Digite o segundo valor: \n");
        scanf("%d", &input2);
        printf("Digite o terceiro valor: \n");
        scanf("%d", &input3);

        output = ((input1 * 2) + (input2 * 3) + (input3 * 5)) / 10.0;
        printf("%.1f\n\n", output);
    }

    return 0;
}