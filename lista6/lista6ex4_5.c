//4 - Escreva um programa que solicita o código e a altura de 5 atletas. Ao final da entrada de dados, informe A ALTURA do atleta mais alto. 
/*5a - Escreva um programa que solicita o código e a altura de 5 atletas. 
Ao final da entrada de dados, informe O CÓDIGO do atleta mais alto. 
5b - informe também a altura média destes 5 atletas. 
5c - não restrinja a entrada de dados a apenas 5 atletas. 
Agora após a inclusão de cada atleta o programa deve perguntar ao usuário se deseja incluir outro. 
A resposta é dada com (0/1). O programa continua mostrando o CÓDIGO do mais alto, e a altura média.
*/
#include <stdio.h>

int main(){

int j,l,i,ll,jj,ii=1,ij=0;

do
{
    printf("\n\n Atleta %d \n Por favor insira o código do atleta:  ", ii);
    scanf("%d",&j);
    printf(" Por favor insira a altura do atleta:  ");
    scanf("%d",&l);
    printf("\n\n Deseja ler outro atleta? \n [0] Não  [1] Sim  ");
    scanf("%d",&i);

    if(l > ll){
        ll = l;
        jj = j;
    }
    
    ij += l;
    ii++;

} while ( i==1 );

if( i ==0){
  ij = ij/(ii);

  printf("\n\n\n Programa finalizado; \n Altura média: %d", ij); 
  printf("\n Altura do atleta mais alto: %d \n Seu código: %d", ll, jj);
}
else{
  do{
    printf("\n mlq praq vc foi apertar outra coisa alem de 0 ou 1");
  }while(i!=0);
}
}