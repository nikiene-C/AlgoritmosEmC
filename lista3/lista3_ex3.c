#include <stdio.h>

int main(void) {

  int ladoA;
  int ladoB;
  int ladoC;

  printf("Digite um numero: \n");
  scanf("%d", &ladoA);

  printf("Digite um numero: \n");
  scanf("%d", &ladoB);

  printf("Digite um numero: \n");
  scanf("%d", &ladoC);

  if (ladoA - ladoB < ladoC && ladoC < ladoA + ladoB)
  {
      printf("é triangulo.\n");
      if ((ladoA == ladoB && ladoB == ladoC))
      {
          printf("triangulo equilatero\n");
      } else if ((ladoA != ladoB && ladoB != ladoC))
      {
          printf("triangulo escaleno\n");
      } else 
      {
          printf("triangulo isosceles\n");
      } 
      if (((ladoA * ladoA) + (ladoB * ladoB)) == (ladoC * ladoC))
      {
          printf("o triangulo é retangulo\n");
      } else
      {
      	  printf("o triangulo nao � retangulo\n");
	  }
      
  }
  else
  {
      printf("nao é triangulo.");
  }
  
  return 0;
}
