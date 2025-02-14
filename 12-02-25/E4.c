/*
4) Escreva um programa que lê dois valores inteiros e exibe os seguintes resultados:
a) o resultado da soma dos números.
b) o resultado da média dos números.
*/

#include <stdio.h>

int main()
{

    // inicializando as variaveis dos valores inteiros
    int n1;
    int n2;
    int soma;
    int media;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n1); // Le o input e atribui o valor a n1

    printf("Digite outro valor inteiro: ");
    scanf("%d", &n2); // Le o input e atribui o valor a n2

    soma = n1 + n2; // Atribui a soma dos números a variavel soma
    printf("Soma dos seus números: %d\n", soma);

    media = soma/2; // Atribui a média dos números a varialve media
    printf("Média dos seus números: %d\n", media);

    return 0;
}