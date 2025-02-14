/*
8) Um triângulo possui 3 lados com tamanhos a, b e c.
Para que um triângulo exista, um lado deve ser menor que a soma dos outros dois, ou seja, as
seguintes condições devem ser satisfeitas:
• a < b + c
• b < a + c
• c < a + b
Desenvolva um programa que:
1. Solicite que o usuário digite os tamanhos (int) dos lados do triângulo (a, b e c).
2. Verifique se existe um triângulo com estes lados.
3. Apresente na tela o resultado.
*/

#include <stdio.h>

int main()
{

    //Inicializa três variaveis do mesmo tipo.
    int a, b, c;

    //Imprime a mensagem e atribui os valores as variaveis respectivas
    printf("Digite os três lados do Triângulo (a, b, c, respectivamente.): ");
    scanf("%d %d %d", &a, &b, &c);

    //Condicão de existência dos triangulos 
    //Todas devem ser verdadeiras, usamos o operador E (&&)
    if (a < b + c && b < a + c && c < a + b){
        printf("O triângulo pode existir!!\n");
    } else {
        printf("O triângulo não fecha.\n");
    }
    return 0;
}