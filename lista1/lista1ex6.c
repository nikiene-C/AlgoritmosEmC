// Escreva um programa que pede para o usuário digitar um inteiro e imprime
//apenas um número: 0 ou 1.

#include <stdio.h>

int main(void){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero e par.");
    } else {
        printf("O numero e impar.");
    }
    
    return 0;
}