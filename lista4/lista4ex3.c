//Sorteie dois números de 1 a 10. Informe quantos destes números estão entre 3 e 7 (inclusive).

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    int cont;

    srand(time(NULL));
    numero1 = random() % 10 +1;
    numero2 = random() % 10 +1;

    printf("Foram sorteados: %d, %d.", numero1, numero2);

    if (numero1 >= 3 && numero1 <= 7) {
        cont++;
    }

    if (numero2 >= 3 && numero2 <= 7) {
        cont++;
    }

    printf("%d estao dentro do intervalo.", cont);
    
    return 0;
}