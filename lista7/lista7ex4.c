//Escreva um programa que sorteia 10 números pares entre 1 e 100 e exibe na tela. (como garantir que o sorteio exiba apenas números pares?)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    int numeroSorteado;

    srand(time(NULL)); 

    for (int cont = 1; cont <= 10; cont++)
    {
        numeroSorteado = rand() % 100 + 1;
        if (numeroSorteado % 2 == 0)
        {
            printf("o numero sorteado foi %d.\n", numeroSorteado);
        } else {
            cont--;
        }
    }
    
    return 0;
}