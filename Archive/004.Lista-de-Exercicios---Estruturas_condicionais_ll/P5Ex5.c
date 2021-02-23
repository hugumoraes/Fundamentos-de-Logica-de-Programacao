#include <stdio.h>

/*
    Para a saida 1,2 e 3:
        n1 = 1, n2 = 2, n3 = 3
    Para a saída 20, 10 e 30
        n1 = 10, n2 = 20, n3 = 30
    Para a saída 5*5, n1/2, n2+1
        n1 = 12 n2 = 13 n3 = 25
    O programa muda de lugar os valores obedecendo as condições
*/

int main (void) {
    int n1, n2, n3, aux;

    if (n2 >= n3)
    {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1 >= n2)
    {
        aux = n1; 
        n1 = n2;
        n2 = aux;

        if (n2 >= n3){
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }

    printf("%d %d %d \n", n1, n2, n3);
    
    return 0;
}