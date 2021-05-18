//4 - Utilizando a mesma matriz, exiba a soma dos elementos da diagonal principal.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    int matrizInteiros[20][20];
    int somaLinha = 0;
    int maiorLinha;
    int posicaoMaiorLinha = 0;
    int somaDiagonal = 0;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            matrizInteiros[i][j] = rand() % 89 + 10;
            printf("%d ", matrizInteiros[i][j]);
            if(i == j)
            {
                somaDiagonal += matrizInteiros[i][j];
            }
        }
        if (i == 0)
        {
            for(int colunas = 0; colunas < 20; colunas++)
            {
                somaLinha += matrizInteiros[i][colunas];
            }
            maiorLinha = somaLinha;
            posicaoMaiorLinha = i;
        } else {
            somaLinha = 0;
            for(int colunas = 0; colunas < 20; colunas++)
            {
                somaLinha += matrizInteiros[i][colunas];
            }
            if (somaLinha > maiorLinha)
            {
                maiorLinha = somaLinha;
                posicaoMaiorLinha = i;

            }
        }

        printf("\n");
    }
    
    printf("A maior linha e %d com a soma %d\n", posicaoMaiorLinha, maiorLinha);
    printf("A soma da diagonal principal e %d\n", somaDiagonal);

    return 0;
}