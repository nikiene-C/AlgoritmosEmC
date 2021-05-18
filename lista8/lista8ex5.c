//5 - Escreva o conteúdo do vetor do exercício anterior na tela, colocando cada valor ao lado do anterior (na mesma linha).
// Se o valor do vetor for múltiplo de 10, então insira uma quebra de linha.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int v[100];
    float total10ultimos = 0;
    float media10ultimos;
    float totalgeral = 0;

    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        v[i] = rand() % 100 + 1;
        if (i >= 90)
        {
             total10ultimos += v[i];
        }
    }
    
    media10ultimos = total10ultimos / 10;
    

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", v[i]);
        if (v[i] % 10 == 0)
        {
            printf("\n");
        }
        totalgeral += v[i];
        if (v[i] < media10ultimos)
        {
            totalgeral += v[i];
        }
            
    }

    printf("\nA soma e %f", totalgeral);

    return 0;
}