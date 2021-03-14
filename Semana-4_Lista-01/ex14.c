#include <stdio.h>
#include <math.h>

int main()
{
    srand(time(NULL));

    int random, hit = 0, attempt, attempts_count = 0;

    random = rand() % 500;

    while (hit == 0)
    {
        printf("Tentativa %d\n", attempts_count + 1);
        printf("Qual eh o numero gerado?\n");
        scanf("%d", &attempt);
        attempts_count += 1;

        if (attempt == random)
        {
            printf("Voce acertou!\n");
            if (attempts_count >= 1 && attempts_count <= 3)
            {
                printf("Classificacao: \\o/");
            }
            else if (attempts_count >= 4 && attempts_count <= 6)
            {
                printf("Classificacao: :-D");
            }
            else if (attempts_count >= 7 && attempts_count <= 10)
            {
                printf("Classificacao: :-)");
            } else {
                printf("Classificacao: :-\\");
            }

            hit = 1;
        }
        else
        {
            if (attempt > random)
            {
                printf("Voce chutou um valor acima do correto\n");
            }
            else
            {
                printf("Voce chutou um abaixo do correto\n");
            }
        }
    }

    return 0;
}