#include <stdio.h>

int main()
{
    int segundos, minutos, horas, dias, aux;

    printf("Digite o numero de segundos a ser convertido: \n");
    scanf("%d", &segundos);

    dias = segundos / (60 * 60 * 24);
    horas = (segundos % (60 * 60 * 24)) / (60 * 60);
    minutos = ((segundos % (60 * 60 * 24)) % (60 * 60)) / 60;
    aux = ((segundos % (60 * 60 * 24)) % (60 * 60)) % 60;

    printf("%d segundos correspondem a %d dias, %d horas, %d minutos e %d segundos", segundos, dias, horas, minutos, aux);
}