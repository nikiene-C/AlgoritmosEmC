#include <stdio.h>

int main(void) {
  
  int num1;

  printf("Digite um número inteiro: \n");
  scanf("%d", &num1);

  if (num1 < 25 || num1 == 40 || num1 > 80)
  {
      printf("O numero digitado cumpre os requisitos.");
  }
  
  return 0;
}