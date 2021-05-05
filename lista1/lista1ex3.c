//Escreva um programa que pede para o usuário digitar um inteiro e imprime o quadrado desse inteiro. 

#include <stdio.h>

int main(void){

    int numero, numeroAoQuadrado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    numeroAoQuadrado = numero * numero;

    printf("O quadrado de %d e %d.", numero, numeroAoQuadrado);

    return 0;
}