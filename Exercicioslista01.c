#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 02 - Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a v�riavel "a" e um para a v�rivel
"b",, Em seguida, fa�a os passos que julgar necess�rios para que ao final, a vari�vel "a" possua o valor que inicialmente
estava em "b" e a variavel "b" e a variavel "b" possua o valor que inicialmente estava em "a", Traduza seu algoritmo para a 
linguagem C e exiba os valores na tela.
 

int main (){

    int a, b, c;
   
      printf("Digite um numero:\n");
      scanf("%d", &a);

      printf("Digite outro numero:\n");
      scanf("%d", &b);  

      printf("Valores lidos: a: %d\t b: %d\n", a, b);

      c = a;
      a = b;
      b = c;

      printf("Valores lidos: a: %d\t b: %d\n", a, b);


    return 0;
*/


    /* 03 - Fa�a um programa em C para trocar o valor de duas variaveis inteiras sem utilizar nenhuma variavel auxiliar

    int main (){

    int a, b;
   
      printf("Digite dois valores: ");
      scanf("%d%d", &a, &b);

      printf("Valores lidos: a: %d\t b: %d\n", a, b);

      a = a + b;
      b = a - b;
      a = a - b;

      printf("Valores lidos: a: %d\t b: %d\n", a, b);


     return 0;

     }
*/

/* 04 - Escreva um programa que leia um vlaor de despesa de restaurante, o valor da gorgeta(em porcentagem) e o n�mero de pessoas
para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta ser� dividida igualmente. 

int main() {
    int numPessoas;
    float valorDespesa, gorgeta, valorTotal, valorPorPessoa;

    printf("Digite o valor da conta, da gorgeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &valorDespesa, &gorgeta, &numPessoas);

    valorTotal = valorDespesa * gorgeta/100 + valorDespesa;
    valorPorPessoa = valorTotal / numPessoas;

    printf("Cada um ira pagar R$%.2f\n", valorPorPessoa);

    return 0;
}

 */  


/* 5 - Uma empresa contrata um encanador a R$45,00 por dia. Fa�a um programa que solicite o n�mero de dias trabalhados pelo encanador
e imprima a quantia liquida que dever� ser paga, sabendo que s�o descontados 8% para o imposto de renda. 

int main () {
  float DiaUteis,  ValorPago, ImpostodeRenda;

  printf("Digite o n�mero de dias trabalhados: ");
  scanf ("%f", &DiaUteis);

  ValorPago = DiaUteis * 45;
  ImpostodeRenda = ValorPago * 8/100;
  ValorPago = ValorPago - ImpostodeRenda;
  
  printf("O Total a receber R$: %.2f\nDesconto R$:%.2f", ValorPago, ImpostodeRenda);

  return 0;

}
*/


/*6 - Crie um programa em C que permita fazer a convers�o cambial entre Reais e D�lares. Considere
como taxa de c�mbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
D�lares. 

int main (){

  float dolar, reais;

  printf("Digite o valor em Reais: ");
  scanf("%f", &reais);

  dolar = reais / 5,30;

  printf("Voc� possui:  $%.2f dolares", dolar);

  return 0;

}

*/

/* Fa�a um programa para ler do teclado uma quantidade de segundos e imprimir na tela a convers�o para horas, 
minutos e segundos 

int main (){
  int segundos, h, m, s, resto;
  
  printf("Digite uma quantidade de segundos: ");
  scanf("%d", &segundos);
  // 3672 segundos em uma hora

  h = segundos / 3600;
  resto = segundos % 3600;
  m = resto / 60;
  s = resto % 60;
  printf("%d:%d:%d\n", h, m, s);

  return 0;

}

*/
