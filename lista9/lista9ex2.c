//2 - Crie uma matriz 10x10 de caracteres. 
//Atribua uma letra "B" a todos os elementos da matriz. 
//Atribua então o caracter "8" a um elemento randômico da matriz. Exiba a matriz na tela.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    int linhaOito = rand() % 10;
    int colunaOito = rand() % 10;
    char matrizCaracteres[10][10];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i == linhaOito && j == colunaOito)
            {
                matrizCaracteres[i][j] = 8;
                printf("%d ", matrizCaracteres[i][j]);
            } else {
                matrizCaracteres[i][j] = 'B';
            }
            printf("%c ", matrizCaracteres[i][j]);
        }
        printf("\n");
    }

    return 0;
}