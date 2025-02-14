/*
12) Desenvolva um programa semelhante ao anterior, só que com a seguinte diferença:
• Caso o usuário não consiga acertar o número sorteado após a 5ª tentativa, o programa deverá
mostrar a mensagem “você excedeu o número máximo de tentativas” e mostrar qual era o número
sorteado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_TENTATIVAS 5

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
            printf("Você acertou!\n");
        } else if (nSorteado < nSecreto) {
            printf("Você chutou baixo.\n");
        } else {
            printf("Você chutou alto.\n");
        }
        if (tentativas > MAX_TENTATIVAS) {
            printf("Você excedeu o número máximo de tentativas!\n");
            printf("O número sorteado era: %d\n", nSecreto);
            break;
        }
    } while (nSorteado != nSecreto);
    return 0;
}