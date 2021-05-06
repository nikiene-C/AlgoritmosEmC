//1 - Solicite um número e então diga se este é um número perfeito. 

#include <stdio.h>

int main(void){

    int numero1, temp1=0;

    printf("Digite um valor pra saber se ele e um numero perfeito: ");
    scanf("%d", &numero1);

    for (int cont = numero1; cont <= numero1 && cont > 0; cont--) {
        if (numero1 % cont == 0 && numero1 != cont) {
            temp1 += cont;
        }    
    }

    if (temp1 == numero1)
    {
        printf("%d e um numero perfeito.", numero1);
    }
    
    return 0;
}