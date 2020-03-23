#include <stdio.h>

int main(void)
{
    for (int i = 2; i < 21; i++)
    {
        if ((i % 2) == 1)
        {
            printf("Numero: %d\n\n", i);
        }
    }

    return 0;
}