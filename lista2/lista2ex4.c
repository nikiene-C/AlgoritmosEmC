//4. Crie um programa que recebe um número inteiro e informa se este número é múltiplo de 10.

#include <stdio.h>

int main(void) {

    int numero1;

    printf("Digite um numero para saber se e divisivel por 10: ");
    scanf("%d", &numero1);

    if (numero1 % 10 == 0)
    {
        printf("Divisivel por 10.");
    } else
    {
        printf("Nao e divisivel por 10");
    }
    
    return 0;
}