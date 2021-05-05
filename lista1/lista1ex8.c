//Faça um programa solicita os valores de peso e altura de uma pessoa, calcula e
//exibe seu IMC (Índice de Massa Corporal)

#include <stdio.h>

int main(void){

    float peso, altura, IMC;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    printf("O seu IMC e %.2f", IMC);

    return 0;
}