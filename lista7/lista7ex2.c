//Crie um programa que recebe 5 números inteiros e exiba o menor. 
#include <stdio.h>

int main(void){

  int numeroUsuario, menorNumeroDigitado;

  for (int cont = 1; cont <= 5; cont++)
  {
    printf("Digite um número inteiro: ");
    scanf("%d", &numeroUsuario);

    if (cont == 1){
      menorNumeroDigitado = numeroUsuario;
    }else if (numeroUsuario < menorNumeroDigitado){
      menorNumeroDigitado = numeroUsuario;
    }
    
  }
    
  printf("O menor numero digitado foi: %d", menorNumeroDigitado);

  return 0;
}
