//Crie um vetor de 100 posições, preencha com números aleatórios de 1 a 100. Exiba a média destes.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int v[100];
    int total = 0;
    float media;

    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        v[i] = rand() % 100 + 1;
        printf("%d\n", v[i]);
        total += v[i];
        printf("%d\n", total);
    }
    
    media = total / 100;
    printf("A media e %f", media);

    return 0;
}