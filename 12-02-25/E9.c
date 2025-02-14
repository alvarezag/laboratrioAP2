/*
9) Escreva um programa para verificar o dia da semana a fim de exemplificar a utilização do switch ..
case. O usuário deve digitar um número e o programa deve retornar o dia da semana equivalente ao número.
Os valores são 0 = domingo, 1 = segunda-feira, 2 = terça-feira, 3 = quarta-feira, 4 – quinta-feira, 5 = sextafeira, 6 = sábado. 
Qualquer outro valor informar a mensagem “Dia da semana inexistente!”.
*/

#include <stdio.h>

int main()
{

    int diaSemana;

    //Imprime a mensagem e atribui ao dia da semana correspondente
    printf("Digite um número de 0 a 6: ");
    scanf("%d", &diaSemana);

    //Avalia o input do usuário e imprime a mensagem correspondente
    switch (diaSemana)
    {
    case 0:
        printf("O dia da semana é Domingo.\n");
        break;

    case 1:
        printf("O dia da semana é Segunda.\n");
        break;

    case 2:
        printf("O dia da semana é Terça.\n");
        break;

    case 3:
        printf("O dia da semana é Quarta.\n");
        break;

    case 4:
        printf("O dia da semana é Quinta.\n");
        break;

    case 5:
        printf("O dia da semana é Sexta.\n");
        break;

    case 6:
        printf("O dia da semana é Sábado.\n");
        break;

    default:
        printf("Dia da semana não existente!\n");
        break;
    }
    return 0;
}