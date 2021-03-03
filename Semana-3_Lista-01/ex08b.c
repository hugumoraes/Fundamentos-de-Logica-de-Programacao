#include <stdio.h>

int main(void)
{
    int anoNasc, mesNasc, diaNasc, anoAtual, mesAtual, diaAtual, idade, diaSemana, mesAlgoritmo;

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

    if (mesNasc == 2)
    {
        mesAlgoritmo = 14;
    }
    else if (mesNasc == 1)
    {
        mesAlgoritmo = 13;
    }
    else
    {
        mesAlgoritmo = mesNasc;
    }

    diaSemana = (diaNasc + (((mesAlgoritmo + 1) * 26) / 10) + (anoNasc % 100) + ((anoNasc % 100) / 4) + ((anoNasc / 100) / 4) + (5 * (anoNasc / 100))) % 7;

    printf("\nData atual: %d/%d/%d  -  Nascimento: %d/%d/%d\n", diaAtual, mesAtual, anoAtual, diaNasc, mesNasc, anoNasc);
    printf("Idade: %d\n", idade);

    switch (diaSemana)
    {
    case 0:
        printf("Nascimento: Sabado");
        break;
    case 1:
        printf("Nascimento: Domingo");
        break;
    case 2:
        printf("Nascimento: Segunda-feira");
        break;
    case 3:
        printf("Nascimento: Terca-Feira");
        break;
    case 4:
        printf("Nascimento: Quarta-Feira");
        break;
    case 5:
        printf("Nascimento: Quinta-feira");
        break;
    case 6:
        printf("Nascimento: Sexta-feira");
        break;
    default:
        break;
    }
}