//4 - Escreva um programa que joga par ou ímpar com o usuário.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    srand(time(NULL));
    numero = random() % 2;

    int parOuImpar;

    printf("Par(0) ou Impar(1)? ");
    scanf("%d", &parOuImpar);

    if ((numero + parOuImpar) % 2 == 0 && parOuImpar == 0)
    {
        printf("Parabens!");
    }
    else if ((numero + parOuImpar) % 2 == 1 && parOuImpar == 1) {
        printf("Parabens!");
    } else {
        printf("Voce perder.");
    }
    

    return 0;
}