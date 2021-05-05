//3. Solicite que o usuário digite um número. Informe então se este número é par ou ímpar. 

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