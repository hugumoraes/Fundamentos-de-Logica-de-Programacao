#include <stdio.h>

int main(void)
{
    int i = 2;

    while (i <= 20)
    {
        if ((i % 2) == 1)
        {
            printf("Numero: %d\n\n", i);
        }

        i++;
    }

    return 0;
}