#include <stdio.h>

int main()
{
  float n1, n2, aux;

  printf("Digite o primeiro valor: ");
  scanf("%f", &n1);

  printf("Digite o segundo valor: ");
  scanf("%f", &n2);

  aux = n1 + n2;

  printf("n1: %.2f, n2: %.2f, aux: %.2f", n1, n2, aux);

  return 0;
}