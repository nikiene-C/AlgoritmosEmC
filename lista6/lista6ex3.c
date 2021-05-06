//3 - Criar um algoritmo que imprima a soma dos números pares entre 25 e 200.

#include <stdio.h>

int main(void){

    //variavel ichilol
    int sutututu;

    for (int cont = 25; cont <= 200; cont++)
    {
        if (cont % 2 == 0)
        {
            sutututu += cont;
        }
        
    }
    
    printf("A soma dos numeros pares entre 25 e 200 e: %d", sutututu);

    return 0;
}