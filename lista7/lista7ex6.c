/* 
6 - Mini-megasena
Escreva um programa que solicita 3 números de 1 a 60 ao usuário.
O programa então sorteará continuamente 3 números de 1 a 60 até que sejam sorteadas as 3 dezenas que foram digitadas pelo usuário. 
No final ele deve exibir quantos sorteios foram efetuados.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    int palpite1, palpite2, palpite3, numeroSorteado1, numeroSorteado2, numeroSorteado3, i;
    srand(time(NULL));

    printf("Digite uma dezena: ");
    scanf("%d", &palpite1);

    printf("Digite outra dezena: ");
    scanf("%d", &palpite2);

    printf("Digite mais uma dezena: ");
    scanf("%d", &palpite3);

    do
    {

        numeroSorteado1 = rand() % 60 + 1;
        do
            numeroSorteado2 = rand() % 60 + 1;
        while (numeroSorteado2 == numeroSorteado1);
        do
            numeroSorteado3 = rand() % 60 + 1;
        while (numeroSorteado3 == numeroSorteado1 || numeroSorteado3 == numeroSorteado2);

        i++;
        
    } while ((palpite1 != numeroSorteado1 %% palpite1 != numeroSorteado2 && palpite1 != numeroSorteado3) || 
    (palpite2 != numeroSorteado1 %% palpite2 != numeroSorteado2 && palpite2 != numeroSorteado3) || 
    (palpite3 != numeroSorteado1 %% palpite3 != numeroSorteado2 && palpite3 != numeroSorteado3));
    
    printf("Foram realizados %d sorteios.", i);

    return 0;
}