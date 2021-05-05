//2. Agora seu programa deve receber dois números e exibir eles em ordem crescente.

#include <stdio.h>

int main(void){

    int numero1, numero2;

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("Os numeros em ordem crescente: %d, %d", numero2, numero1);
    } else
    {
        printf("Os numeros em ordem crescente: %d, %d", numero1, numero2);
    }
    
    return 0;
}