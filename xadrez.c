#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main(void)
{
    // Quantidade de casas para cada peça (somente inteiros)
    int passosTorre = 5;
    int passosBispo = 5;
    int passosRainha = 8;

    // Direções (strings literais)
    const char *DIREITA = "Direita\n";
    const char *CIMA_DIREITA = "Cima Direita\n";
    const char *ESQUERDA = "Esquerda\n";

    for (int i = 0; i < passosTorre; i++)
    {
        printf("%s", DIREITA);
    }

    int i = 0;
    while (i < passosBispo)
    {
        printf("%s", CIMA_DIREITA);
        i++;
    }

    int j = 0;
    do
    {
        printf("%s", ESQUERDA);
        j++;
    } while (j < passosRainha);

    return 0;
}