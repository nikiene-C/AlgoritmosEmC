//5 - Leia uma palavra. Exiba na tela quantas letras "A" esta palavra possui.

#include <stdio.h>

int main(void){
    char palavraQualquer[1000];
    int numeroA = 0;
    printf("Digite uma palavra para saber quantos \'A\' ela possui: ");
    scanf("%s", palavraQualquer);

    for(int i = 0; palavraQualquer[i]!='\0'; i++)
    {
        if(palavraQualquer[i] == 'a')
        {
            numeroA++;
        }
    }

    printf("%d ", numeroA);

    return 0;
}