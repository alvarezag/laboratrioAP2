/*
6) Escreva um programa para calcular a área de uma esfera. Seu programa deve declarar uma constante
Pi de valor 3.141592. Para calcularmos a área da superfície da esfera utilizamos a seguinte fórmula:
A = 4 . π . r²
*/

#include <stdio.h>
#define pi 3.141592

int main()
{

    float raio;
    float area;

    printf("Digite o raio da sua esfera: ");
    scanf("%f", &raio);

    area = 4 * pi * raio;

    // imprime o raio dado de input e a area final da superficie da esfera
    printf("Sua esfera de raio %.2f tem área de %.2f.\n", raio, area);
    return 0;

}