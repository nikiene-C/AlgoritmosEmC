//6. Altere o exercício anterior de forma que ele informe também se os números são iguais.

#include <stdio.h>

int main(void){

    int numero1, numero2;

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    if (numero1 == numero2) {
        printf("Os numeros sao iguais.");
    } else if (numero1 > numero2) {
        printf("O maior numero e: %d", numero1);
    } else {
        printf("O maior numero e: %d", numero2);
    }
    
    return 0;
}