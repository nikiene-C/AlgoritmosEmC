//4 - Escreva um programa que exibe a soma dos números de 1 a 100

#include <stdio.h>

int main(void) {

    int soma;

    for(int cont = 1; cont <= 100; cont++){
        soma += cont;
        
    }
   
   printf("%d", soma);
    
    return 0;
}