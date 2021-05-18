//1 - Crie uma matriz 3x3 de números inteiros, associe o valor 8 ao elemento central desta matriz. Exiba a matriz na tela de forma adequada.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){


    int matrizInteiros[3][3];
    srand(time(NULL));
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            if(linha == 1 && coluna == 1)
            {
                matrizInteiros[linha][coluna] = 8;
                printf("%d ", matrizInteiros[linha][coluna]);
            }
            else
            {
                matrizInteiros[linha][coluna] = rand() % 10;
                printf("%d ", matrizInteiros[linha][coluna]);
            }
        }
        printf("\n");
    }
        
        
    return 0;
}