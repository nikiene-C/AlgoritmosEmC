//Escreva um programa que pede para o usuário digitar um inteiro e imprime o
//inverso desse inteiro

#include <stdio.h>

int main(void){

    int numero, inversoDoNumero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    inversoDoNumero = numero * -1;

    printf("O inverso de %d e %d", numero, inversoDoNumero);

    return 0;
}