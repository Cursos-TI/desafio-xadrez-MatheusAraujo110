#include <stdio.h>

void moverTorre(int passos)
{
    if (passos <= 0)
        return;             // Caso base
    printf("Direita\n");    // Ação
    moverTorre(passos - 1); // Chamada recursiva
}

void moverBispo(int passosVerticais, int passosHorizontais)
{
    if (passosVerticais <= 0)
        return; // Caso base da recursão

    // Loop interno: movimenta horizontalmente para cada movimento vertical
    for (int h = 0; h < passosHorizontais; h++)
    {
        printf("Direita\n");
    }

    printf("Cima\n"); // Movimento vertical

    moverBispo(passosVerticais - 1, passosHorizontais); // Recursão
}

void moverRainha(int passos)
{
    if (passos <= 0)
        return; // Caso base
    printf("Esquerda\n");
    moverRainha(passos - 1); // Chamada recursiva
}

void moverCavalo(int passosVerticais, int passosHorizontais)
{
    for (int v = 1; v <= passosVerticais; v++)
    {
        printf("Cima\n");

        for (int h = 1; h <= passosHorizontais; h++)
        {
            if (v < passosVerticais)
            {
                // Antes de completar o movimento vertical, pula horizontal
                continue;
            }
            printf("Direita\n");
            break; // Sai do loop após mover horizontal uma vez
        }
    }
}

int main(void)
{
    // Quantidade de passos definida no código
    int passosTorre = 5;
    int passosBispoVertical = 5;
    int passosBispoHorizontal = 1;
    int passosRainha = 8;
    int passosCavaloVertical = 2;
    int passosCavaloHorizontal = 1;

    // Torre
    printf("=== Movimentos da Torre ===\n");
    moverTorre(passosTorre);
    printf("\n");

    // Bispo
    printf("=== Movimentos do Bispo ===\n");
    moverBispo(passosBispoVertical, passosBispoHorizontal);
    printf("\n");

    // Rainha
    printf("=== Movimentos da Rainha ===\n");
    moverRainha(passosRainha);
    printf("\n");

    // Cavalo
    printf("=== Movimentos do Cavalo ===\n");
    moverCavalo(passosCavaloVertical, passosCavaloHorizontal);
    printf("\n");

    return 0;
}
