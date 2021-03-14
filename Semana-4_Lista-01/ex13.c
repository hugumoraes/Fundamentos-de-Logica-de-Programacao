#include <stdio.h>

int main()
{
    int altura_chico = 150, altura_ze = 110, anos = 0;

    while(altura_chico >= altura_ze) {
        altura_chico += 2;
        altura_ze += 3;
        anos++;
    }

    printf("anos: %d", anos);

    return 0;
}