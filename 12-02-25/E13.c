/*
Desenvolva um programa que implemente o seguinte somatório:

𝑖
∑   i/2 + 5i
𝑖=1

O usuário deve definir o valor ‘n’ para o limite superior do somatório.
*/

#include <stdio.h>

int main()
{

    int n, i;
    float soma; //Armazena o somatorio, tipo float para representar a divisao

    printf("Digite o limite superior (n) do Somatório: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++){
        soma += (i / 2.0) + (5 * i); //Vai somando o valor repetidamente e armazenando em soma
    }
    printf("Valor final do somatório: %.2f\n", soma);
    return 0;
}