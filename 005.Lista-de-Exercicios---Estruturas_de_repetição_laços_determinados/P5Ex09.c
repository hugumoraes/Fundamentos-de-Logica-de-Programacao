#include <stdio.h>

int main(void)
{
    int i, carac;

    for (i = 1000; i <= 9999; i++)
    {
        int n1, n2, n3, n4;
        n1 = i % 100;
        n2 = i / 100;

        int sum = n1 + n2;

        carac = sum * sum;

        if (i == carac)
        {
            printf("%d\n", carac);
        }
        
    }

    return 0;
}