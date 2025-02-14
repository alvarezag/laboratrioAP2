/*
10) Desenvolva um programa que:
1. Sorteie um número inteiro no intervalo de 1 a 100 (incluindo os valores 1 e 100). Utilize a função rand
da biblioteca time.h. Utilize a função srand(time(0)); para ser a semente geradora do número
aleatório, baseado na data e hora do sistema.
2. Solicite que o usuário tente adivinhar o número sorteado, digitando o seu palpite.
(se o usuário entrar um valor inválido - menor que 1 ou maior que 100 - o programa deverá refazer
a solicitação até que o usuário entre um valor válido).
Verifique se o palpite do usuário está correto:
• Se estiver correto, o programa deverá imprimir na tela “Parabéns!!! Você acertou!”
• Se o palpite for menor que o número sorteado, deverá imprimir “Você chutou muito baixo! O
valor correto é xx.” (onde xx é o número sorteado).
• Se o palpite for maior que o número sorteado, deverá imprimir “Você chutou muito alto! O valor
correto é xx.” (onde xx é o número sorteado).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nSecreto;
    int nSorteado;

    srand(time(0)); //Fixa a seed do número aleatório
    nSecreto = (rand() % 100) + 1; //Gera número entre 1 a 100

    do {
        //Imprime a mensagem e atribui o palpite do usuario ao nSorteado
        printf("Digite um número de 1 a 100: ");
        scanf("%d", &nSorteado);

        //Verifica se o nSorteado está entre 1 e 100
        if (nSorteado < 1 || nSorteado > 100) {
            printf("Número inválido! Sorteie um número de 1 a 100\n");
        }
    } while (nSorteado < 1 || nSorteado > 100);
    // do...while: repete o bloco enquanto a condicao passada no parametro do while é True

    //Dicas e verificação do Sorteio
    if (nSorteado == nSecreto){
        printf("Você acertou!!!\n");
    } else if (nSorteado < nSecreto) {
        printf("Você chutou baixo... O valor correto é: %d\n", nSecreto);
    } else if (nSorteado > nSecreto) {
        printf("Você chutou alto... O valor correto é: %d\n", nSecreto);
    }
    return 0;
}