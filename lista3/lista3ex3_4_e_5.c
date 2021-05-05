//3 - Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo. 
//Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.
//4 - Incremente o exercício anterior, para o caso das medidas formarem um triângulo válido , informar qual o tipo de triângulo que eles formam: equilátero, isósceles ou escaleno.
//5 -  Incremente o exercício anterior, agora informando se este é também um triângulo retângulo.

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
      	  printf("o triangulo nao e retangulo\n");
	  }
      
  }
  else
  {
      printf("nao é triangulo.");
  }
  
  return 0;
}
