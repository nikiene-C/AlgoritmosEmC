//Crie um programa que recebe números inteiros até que o usuário digite 0 e então exiba o maior e o menor. 
#include <stdio.h>

int main(void){

    int numeroUsuario, maiorValorDigitado, menorValorDigitado;
    int cont = 0;

    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &numeroUsuario);
        
    	if (cont == 0){
            maiorValorDigitado = numeroUsuario;
            menorValorDigitado = numeroUsuario;
        } if (numeroUsuario > maiorValorDigitado && numeroUsuario != 0){
               maiorValorDigitado = numeroUsuario;
        } if (numeroUsuario < menorValorDigitado && numeroUsuario != 0){
               menorValorDigitado = numeroUsuario;
        }

        cont++;
    }while(numeroUsuario != 0);

    printf("O programa parou após %d ciclos. O menor numero digitado foi %d e o maior %d.", cont, menorValorDigitado, maiorValorDigitado);

    return 0;
}