//Crie e preencha o mesmo vetor de 100 números. Calcule a soma de todos que são menores que a média dos 10 últimos.

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
        if (v[i] < media10ultimos)
        {
            totalgeral += v[i];
        }
            
    }

    printf("\nA soma e %f", totalgeral);

    return 0;
}