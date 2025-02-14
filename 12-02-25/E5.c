/*
5) Escreva um programa que converte uma temperatura Celsius em Fahrenheit.
Exemplo de saída:
‘Digite a temperatura em graus Celsius: 21
A Temperatura em graus Fahrenheit é 69.80’
*/

#include <stdio.h>

int main()
{

    int celsius;
    int fahrenheit;

    // imprime a mensagem e pega o input, atribuindo-o a variavel celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%d", &celsius);

    // formula de conversao 
    fahrenheit = (celsius * 1.8) + 32;

    // mostra a temperatura convertida
    printf("Sua temperatura em Fahrenheit é: %d\n", fahrenheit);
    return 0;
}