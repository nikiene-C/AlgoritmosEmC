//5 - Escreva um programa que solicita 10 números e ao final exibe a soma de todos eles.

#include <stdio.h>

int main(void){

    int numero, soma;

    for (int cont = 1; cont <= 10; cont++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

    }

    printf("%d", soma);

    return 0;
}