//6 - Elabore um programa que solicita um número e então diz se este número é primo.

#include <stdio.h>

int main(void){

    int numeroUsuario, numeroDivisores = 0;

    printf("Digite um numero para saber se e primo: ");
    scanf("%d", &numeroUsuario);

    for (int cont = 2; cont <= numeroUsuario / 2; cont++)
    {
        if (numeroUsuario % cont == 0)
        {
            numeroDivisores++;
        }
    }
    
    if (numeroDivisores == 0)
    {
        printf("O numero %d e primo.", numeroUsuario);
    } else {
        printf("O numero %d nao e primo.", numeroUsuario);
    }
    

    return 0;
}