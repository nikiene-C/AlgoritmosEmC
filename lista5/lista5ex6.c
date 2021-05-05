//6 - Escreva um programa que solicita um número ao usuário, e então exibe todos os seus divisores.

#include <stdio.h>

int main(void){

    int numero1;

    printf("Digite um valor pra saber seus divisores: ");
    scanf("%d", &numero1);

    for (int cont = numero1; cont <= numero1 && cont > 0; cont--) {
        if (numero1 % cont == 0) {
            printf("%d e divisor\n", cont);
        }    
    }
    
    return 0;
}