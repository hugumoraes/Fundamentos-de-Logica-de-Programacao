#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, saida;
    int auxA, auxB;
    char opcao;

    printf("Digite dois valores: (A e B)\n\n");
    scanf("%f%f", &a, &b);
    printf("\nOs valores sao: A:%f - B:%f\n\n", a, b);

    printf("Escolha uma das operacoes: \n\n");
    printf("1. (S)ome os valores\n\n");
    printf("2. Su(B)traia os valores\n\n");
    printf("3. (M)ultiplique os valores\n\n");
    printf("4. (D)ivida os valores\n\n");
    printf("5. Calcule o (Q)uociente da divisao\n\n");
    printf("6. Calcule o (R)esto da divisao\n\n");
    printf("7. Calcule a pot(E)ncia de A por B\n\n");
    printf("8. Calcule a rai(Z) A de B\n\n");

    scanf(" %c", &opcao);

    if (opcao == 'S' || opcao == 's')
    {
        saida = a + b;
        printf("\nResultado: %.2f", saida);
    }
    else if (opcao == 'B' || opcao == 'b')
    {
        saida = a - b;
        printf("\nResultado: %.2f", saida);
    }
    else if (opcao == 'M' || opcao == 'm')
    {
        saida = a * b;
        printf("\nResultado: %.2f", saida);
    }
    else if (opcao == 'D' || opcao == 'd')
    {
        if (a == 0 && b == 0)
        {
            printf("\nIndeterminacao matematica");
        }
        else
        {
            saida = a / b;
            printf("\nResultado: %.2f", saida);
        }
    }
    else if (opcao == 'Q' || opcao == 'q')
    {
        if (a == 0 && b == 0)
        {
            printf("\nIndeterminacao matematica");
        }
        else
        {
            saida = floor(a / b);
            printf("\nResultado: %.0f", saida);
        }
    }
    else if (opcao == 'R' || opcao == 'r')
    {
        if (a == 0 && b == 0)
        {
            printf("\nIndeterminacao matematica");
        }
        else
        {
            auxA = floor(a);
            auxB = floor(b);
            saida = auxA % auxB;
            printf("\nResultado: %.0f", saida);
        }
    }
    else if (opcao == 'E' || opcao == 'e')
    {
        saida = pow(a, b);
        printf("\nResultado: %.2f", saida);
    }
    else if (opcao == 'Z' || opcao == 'z')
    {
        if (b < 0)
        {
            auxA = floor(a);
            if (auxA == a && (auxA % 2) == 0)
            {
                printf("Nao existe raiz par de numero negativo");
            }
        }
        else
        {
            saida = pow(b, (1 / a));
            printf("\nResultado: %.2f", saida);
        }
    }
}