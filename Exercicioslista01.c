#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 02 - Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a váriavel "a" e um para a várivel
"b",, Em seguida, faça os passos que julgar necessários para que ao final, a variável "a" possua o valor que inicialmente
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


    /* 03 - Faça um programa em C para trocar o valor de duas variaveis inteiras sem utilizar nenhuma variavel auxiliar

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

/* 04 - Escreva um programa que leia um vlaor de despesa de restaurante, o valor da gorgeta(em porcentagem) e o número de pessoas
para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta será dividida igualmente. 

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


