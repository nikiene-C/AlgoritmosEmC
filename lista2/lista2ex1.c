//1. Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 10.
#include <stdio.h>

int main(void){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 10)
        printf("O numero e maior que 10.");

    return 0;
}