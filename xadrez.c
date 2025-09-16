#include <stdio.h>

int main(void)
{
    int passosTorre = 5;
    int passosBispo = 5;
    int passosRainha = 8;

    int passosCavaloVertical = 2;  // duas casas para baixo
    int passosCavaloHorizontal = 1; // uma casa para a esquerda

    const char *DIREITA = "Direita\n";
    const char *CIMA_DIREITA = "Cima Direita\n";
    const char *ESQUERDA = "Esquerda\n";
    const char *BAIXO = "Baixo\n";

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

    printf("\n");

    for (int v = 0; v < passosCavaloVertical; v++) // movimento vertical (2 casas)
    {
        printf("%s", BAIXO);

        // Dentro do loop vertical, usamos while para controlar a parte horizontal
        int h = 0;
        while (h < passosCavaloHorizontal && v == passosCavaloVertical - 1)
        {
            // Só move horizontal depois de terminar o movimento vertical
            printf("%s", ESQUERDA);
            h++;
        }
    }

    return 0;
}
