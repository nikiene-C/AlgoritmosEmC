//1 - Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).
//1 e meio - Escreva um programa solicita um numero que exibe a mensagem "SENAC" se este número for 13, 26, 42 ou 70.

#include <stdio.h>

int main(void) {
  int num1;

  printf("Digite um número inteiro: \n");
  scanf("%d", &num1);

  //ex1
  if ((num1 >= 15 && num1 <= 25) || (num1 >= 45 && num1 <= 50))
  {
      printf("ERRO!");
  }
  else
  {
   printf("seu número é %d\n", num1);
  }

  //ex 1.5
  if (num1 == 13 || num1 == 26 || num1 == 42 || num1 == 70)
  {
    printf("SENAC");
  }
  
  return 0;
}
