#include <stdio.h>
#include <stdlib.h>

/* Aula 28

Operador de decremento

*/


int main(){

int resultado, contador = 10;


//sinônimas

contador--;
contador -= 1;
contador = contador - 1;

    resultado = contador--;
    
    printf("\aValor: %d\n", --contador);


    return 0;
}