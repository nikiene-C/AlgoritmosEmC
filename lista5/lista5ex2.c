//2 - Escreva um programa que exibe o quadrado de todos os números de 1 a 20.

#include <stdio.h>

int main(void){

    int cont = 1;

    do
    {
        printf("%d ao quadrado: %d\n", cont, cont * cont);
        cont++;
    } while (cont <= 20);
    

    return 0;
}