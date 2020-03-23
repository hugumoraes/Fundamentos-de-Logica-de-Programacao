#include <stdio.h>

int main(void)
{
    float n, media = 0;
    int counter = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um numero: \n");
        scanf("%f", &n);
        if (n > 0)
        {
            counter++;
            media += n;
        }
    }

    printf("Existem %d valores positivos\n", counter);
    printf("A media eh: %.1f", (media / counter));

    return 0;
}