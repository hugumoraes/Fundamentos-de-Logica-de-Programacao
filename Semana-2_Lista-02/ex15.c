#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero de segundos: \n");
    scanf("%d", &n);
      
    printf("%d dias, %d horas, %d minutos e %d segundos", (n / 86400), (n % 86400) / 3600, ((n % 86400) % 3600) / 60, ((n % 86400) % 3600) % 60);

    return 0;
}