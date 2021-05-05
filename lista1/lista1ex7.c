//Faça um programa que converte temperaturas de Celsius para Fahrenheit.

#include <stdio.h>

int main(void) {

    float tempCelsius, tempFahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempCelsius);

    tempFahrenheit = (tempCelsius * 9/5) + 32;

    printf("%.1f celsius em fahrenheit: %.1f", tempCelsius, tempFahrenheit);

    return 0;
}