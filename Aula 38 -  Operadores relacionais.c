#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Operadores relacionais
menor que (a < b)
maior que (a > b)
menor ou igual (a <= b)
maior ou igual (a >= b)
igual (a == b)
diferente (a != b)
 */

int main (void){

    int a = 10;

    setlocale(LC_ALL, "");
   
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if (a < 0) // if = se
   
        printf("\n\tValor negativo!\n");
        printf("\n\tContinuação do programa...\n");
 
    




    return 0;



   

}
