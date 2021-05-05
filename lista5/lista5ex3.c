//3 - Escreva um programa que solicita 5 números ao usuário, e para cada número digitado, informa se este é par ou ímpar.

#include <stdio.h>

int main(void){

    int cont = 1;
    int numeroUsuario;

    do
    {
        printf("Digite um numero para saber se e par ou impar: ");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario % 2 == 0)
        {
            printf("O numero %d e par.\n", numeroUsuario);
        } else {
            printf("O numero %d e impar.\n", numeroUsuario);
        }

        cont++;
        
    } while (cont <= 5);
    

    return 0;
}