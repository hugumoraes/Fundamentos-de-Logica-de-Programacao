#include <stdio.h>

int main()
{
    int senha = 2002, tentativa;

    do
    {
        printf("Digite sua senha: \n");
        scanf("%d", &tentativa);

        if (senha != tentativa)
        {
            printf("Senha invalida\n\n");
        }
    } while (senha != tentativa);

    printf("\nAcesso permitido");

    return 0;
}