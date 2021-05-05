//2 - Sorteie dois números de 1 a 5 e peça que o usuário acerte os dois números, não necessariamente na mesma ordem.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    srand(time(NULL));
    int numero1 = random() % 5 + 1;
    int numero2 = random() % 5 + 1;

    int chute1, chute2;

    printf("Foram sorteados 2 numeros entre 1 e 5, tente adivinhar: ");
    scanf("%d", &chute1);

    printf("Tente adivinhar o outro numero: ");
    scanf("%d", &numero2);
    
    if ((chute1 == numero1 || chute1 == numero2) && (chute2 == numero1 || chute2 == numero2)) {
        printf("Parabens! Voce acertou os dois numeros.")
    } else {
        printf("Infelizmente voce errou.")
    }

    return 0;
}