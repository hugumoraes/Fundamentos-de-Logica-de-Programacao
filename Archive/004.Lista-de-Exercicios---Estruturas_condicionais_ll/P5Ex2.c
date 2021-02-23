#include <stdio.h>

int main(void)
{
    int anoNasc, mesNasc, diaNasc, anoAtual, mesAtual, diaAtual, idade;

    printf("Digite seu ano de nascimento: \n");
    scanf("%d", &anoNasc);
    printf("Digite o mes do seu nascimento: \n");
    scanf("%d", &mesNasc);
    printf("Digite o dia do seu nascimento: \n");
    scanf("%d", &diaNasc);

    printf("\nDigite o ano atual: \n");
    scanf("%d", &anoAtual);
    printf("Digite o mes atual: \n");
    scanf("%d", &mesAtual);
    printf("Digite o dia atual: \n");
    scanf("%d", &diaAtual);

    idade = anoAtual - anoNasc;

    if (mesAtual < mesNasc)
    {
        idade -= 1;
    }
    else if (mesAtual == mesNasc)
    {
        if (diaAtual > diaNasc)
        {
            idade -= 1;
        }
    }

    printf("\nData atual: %d/%d/%d  -  Nascimento: %d/%d/%d\n", diaAtual, mesAtual, anoAtual, diaNasc, mesNasc, anoNasc);
    printf("Idade: %d", idade);
}