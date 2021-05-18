/*
Crie uma matriz 10x10 de caracteres e preencha com espaços. Atribua um caracter "O" ao elemento 5,5.
Solicite que o usuário digite um dos seguintes comandos:
1 - cima, 2 - baixo, 3 - esquerda, 4 - direita, 5 - sair.
os comandos de direção fazem o caracter "O" se mover pela matriz. 
O programa se repete até que seja digitado 5.
*/

#include <stdio.h>

int main(void){
    char matrizCaracteres[10][10];
    int linhaO = 5;
    int colunaO = 5;
    int opcao;
    do
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i == linhaO && j == colunaO)
                {
                    matrizCaracteres[i][j] = 'O';
                    printf(" %c |", matrizCaracteres[i][j]);
                } else
                {
                    matrizCaracteres[i][j] = ' ';
                    printf(" %c |", matrizCaracteres[i][j]);
                }
            }
            
            printf("\n");
        }
        printf("1 - cima, 2 - baixo, 3 - esquerda, 4 - direita, 5 - sair.\n");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            if (linhaO > 0)
            {
                linhaO--;
            }
            else
            {
                printf("Opcao Invalida (limite atingido)\n");
            }
        }
        if (opcao == 2)
        {
            if (linhaO < 9)
            {
                linhaO++;
            }
            else
            {
                printf("Opcao Invalida (limite atingido)\n");
            }
        }
        if (opcao == 3)
        {
            if (colunaO > 0)
            {
                colunaO--;
            }
            else
            {
                printf("Opcao Invalida (limite atingido)\n");
            }
        }
        if (opcao == 4)
        {
            if (colunaO < 9)
            {
                colunaO++;
            }
            else
            {
                printf("Opcao Invalida (limite atingido)\n");
            }
        }
        
        
    } while (opcao != 5);
    
    printf("Programa encerrado.");

    return 0;
}