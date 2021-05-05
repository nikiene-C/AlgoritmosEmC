//7 - Solicite que o usuário digite um número entre 10 e 20. Se for digitado um numero inválido, peça novamente, até que ele digite um número correto.

#include <stdio.h>

int main(void) {

    int numero1;

    do
    {
        printf("Digite um numero entre 10 e 20: ");
        scanf("%d", &numero1);
    } while (numero1 < 10 || numero1 > 20);
    

    return 0;
}