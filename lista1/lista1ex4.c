//Escreva um programa que pede para o usuário digitar as duas dimensões de um
//retângulo e imprime o perímetro e a área desse retângulo. O programa deve imprimir ambas
//as respostas em um único printf. 

#include <stdio.h>

int main(void){

    float largura, altura, area, perimetro;

    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = (largura * 2) + (altura * 2);
    area = largura * altura;

    printf("O retangulo de lados %.1f e %.1f tem perimetro %.1f e area %.1f.", largura, altura, perimetro, area);

    return 0;
}