#include <stdio.h>

int main() {
    int i, n1, n2, n3;

    for (i = 1000; i < 10000; i++)
    {
        n1 = i / 100;
        n2 = i % 100;
        n3 = n1 + n2;

        if((n3 * n3) == i) {
            printf("%d\n", i);
        }
    }
    

    return 0;
}