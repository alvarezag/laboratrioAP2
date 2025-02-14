/*
7) Escreva um programa que peça para o aluno entrar a sua média (de 0.0 a 10.0) e a sua porcentagem
de frequência (de 0 a 100%).
O seu programa deverá apresentar o resultado do aluno de acordo com as seguintes regras:
• Se a frequência foi menor que 75%, o aluno está REPROVADO, não importa a nota que ele tirou.
• Se a frequência foi maior ou igual a 75% e a sua média foi maior ou igual a 6.0, ele está APROVADO.
• Se a frequência foi maior ou igual a 75% mas a sua média foi menor que 6.0, ele está DE EXAME.
*/

#include <stdio.h>

int main()
{

    float media;
    int frequencia;

    //Imprime a mensagem e atribui o valor do input a media
    printf("Qual foi sua média? ");
    scanf("%f", &media);

    //Imprime a mensagem e atribui o valor do input a frequencia
    printf("Qual sua porcentagem de frequência? ");
    scanf("%d", &frequencia);

    if (frequencia < 75) {
        printf("Você está reprovado.\n"); //Reprovacao por frequencia insuficiente.
    } if (frequencia >= 75 && media >= 6.0) { //Frequencia suficiente e media suficiente gera aprovacao.
        printf("Você está aprovado.\n");
    } else if (frequencia >= 75 && media < 6.0) { //Frequencia suficiente e media insuficiente gera exame.
        printf("Você está de exame.\n");
    }

    return 0;
}