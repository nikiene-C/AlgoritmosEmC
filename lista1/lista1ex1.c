//Escreva um programa que pede para o usuário digitar dois inteiros e imprime a soma desses inteiros. 
#include <stdio.h>

int main (void) {

    int numero1, numero2, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o proximo valor: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    printf("A soma dos valores e %d", soma);

    return 0;
}