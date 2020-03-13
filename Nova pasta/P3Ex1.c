#include <stdio.h>

int main(void)
{
    float n1, n2, n3, media;
    printf("Digite as suas tres notas, respectivamente: (n1, n2, n3)\n");
    scanf("%f%f%f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 7)
    {
        printf("Voce esta aprovado\n");
    }
    else if (media >= 4 && media < 7)
    {
        printf("Voce esta de exame\n");
    }
    else
    {
        printf("Voce reprovou! xd");
    }

    return 0;
}