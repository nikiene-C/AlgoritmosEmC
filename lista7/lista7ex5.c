//5 - Dado um número digitado pelo usuário, exiba o fatorial deste número. 

#include <stdio.h>

int main(void){

    int numeroUsuario;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numeroUsuario);

    for (int cont = 2; cont <= numeroUsuario; cont++) 
    {
      fatorial = fatorial * cont;
    }
    
    printf("o fatorial de %d e %d.", numeroUsuario, fatorial);

    return 0;
}