#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    srand(time(NULL));
    int numcom = rand() %10 + 1;

    int numjog;

    printf("foi sorteado um numero aleatorio de 1 a 10, tente adivinhar: \n");
    scanf("%d", &numjog);

    if (numjog == numcom)
    {
        printf("parabens! voce acertou!\n");
    } else 
    {

        if (numjog < numcom)
        {
            printf("e maior\n");
        } else
        {
            printf("e menor\n");
        }
        
        printf("tente novamente!\n");
        scanf("%d", &numjog);
        if (numjog == numcom)
        {
            printf("parabens! voce acertou!\n");
        } else
        {
            printf("nao foi dessa vez... ultima chance!\n");
            scanf("%d", &numjog);
            if (numjog == numcom)
            {
                printf("parabens! voce acertou!\n");
            } else
            {
                printf("fim de jogo!\n");
            }
        }
    } 
    

    return 0;
}