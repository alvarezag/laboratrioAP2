/*
11) Desenvolva um programa semelhante ao anterior, só que com as seguintes diferenças:
• Se o palpite do usuário estiver incorreto, o programa deverá imprimir a dica (“você chutou muito
baixo” ou “você chutou muito alto”) sem mostrar o valor sorteado, incrementar o número de
tentativas e dar uma nova chance até que ele consiga acertar o número sorteado.
• Quando o usuário conseguir acertar o número sorteado, o programa deverá apresentar a mensagem
de parabéns e mostrar o número de tentativas feitas pelo usuário até acertar o número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nSecreto;
    int nSorteado;
    int tentativas = 0; //Adicionando a variavel para quantidade de tentativas do usuario

    srand(time(0)); //Fixa a seed do número aleatório
    nSecreto = (rand() % 100) + 1; //Gera número entre 1 a 100

    do {
        //Imprime a mensagem e atribui o palpite do usuario ao nSorteado
        printf("Digite um número de 1 a 100: ");
        scanf("%d", &nSorteado);

        //Verifica se o nSorteado está entre 1 e 100
        if (nSorteado < 1 || nSorteado > 100) {
            printf("Número inválido! Sorteie um número de 1 a 100\n");
            continue; //Interrompe a iteração atual e inicia a próxima
        }

        tentativas++;
        // ++ operador de incremento 

        //Dicas e verificação do Sorteio
        if (nSorteado == nSecreto){
            printf("Você acertou! Em apenas %d tentativas!\n", tentativas);
        } else if (nSorteado < nSecreto) {
            printf("Você chutou baixo.\n");
        } else if (nSorteado > nSecreto) {
            printf("Você chutou alto.\n");
        }
    } while (nSorteado != nSecreto);
    return 0;
}