/*
3) Crie um programa que inicialize as seguintes variáveis:
• lapis = 45
• borrachas = 2345
• canetas = 420
• cadernos = 8
• fitas = 13050
A saída deverá ser (tabela):
Lápis         45
Borrachas     2345
Canetas       420
Cadernos      8
Fitas         13050
*/

#include <stdio.h>

int main()
{

    // inicializando e atribuindo valores
    int lapis = 45;
    int borrachas = 2345;
    int canetas = 420;
    int cadernos = 8;
    int fitas = 13050;

    // %-12s : Alinha o texto à esquerda (-) em um espaço de X caracteres (Xs) (s de string).
    printf("%-13s %d\n", "Lápis: ", lapis);
    printf("%-12s %d\n", "Borrachas: ", borrachas);
    printf("%-12s %d\n", "Canetas: ", canetas);
    printf("%-12s %d\n", "Cadernos: ", cadernos);
    printf("%-12s %d\n", "Fitas: ", fitas);
    return 0;
}