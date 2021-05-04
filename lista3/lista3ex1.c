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
