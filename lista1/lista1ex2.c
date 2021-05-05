//Escreva um programa que pede para o usuário digitar dois inteiros e imprime o
//quociente e o resto da divisão inteira desses inteiros. O programa deve imprimir ambas as
//respostas em um único printf. Você pode supor que o usuário não tentará dividir por zero. 

#include <stdio.h>

int main(void) {

    int numero1, numero2;
    float quociente, restoDivisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    quociente = numero1/numero2;
    restoDivisao = numero1 % numero2;

    printf("O quociente é %.2f e o resto da divisão é %.2f", quociente, restoDivisao);

    return 0;
}