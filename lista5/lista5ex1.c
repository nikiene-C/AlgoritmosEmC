//Escreva um programa que exibe qualquer tabuada completa. 
//O programa deve perguntar ao usuário qual tabuada ele deseja visualizar, que irá responder digitando um número de 1 a 10.

#include <stdio.h>

int main(void){

    int cont = 1;
    int numeroTabuada;

    printf("Digite o numero para saber sua tabuada: ");
    scanf("%d", &numeroTabuada);

    do {
        printf("%d x %d = %d\n", numeroTabuada, cont, numeroTabuada * cont);
        cont++;
    } while (cont <= 10);
    
    return 0;
}