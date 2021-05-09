//2 - Solicite 5 números. Exiba os que estão acima da média.

#include <stdio.h>

int main(void){

    int vetorNumeros[5], media;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetorNumeros[i]);

        media += vetorNumeros[i];
    }

    media /= 5;
    
    return 0;
}