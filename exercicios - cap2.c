#include <stdio.h>
#include <stdlib.h>


/* 2.1 Dada uma distância percorrida (em quilômetros), bem como o total de combustível gasto (em litros), informe o consumo médio
 do veículo */

int main (void){
    float D, C, M;

    printf("Distancia? ");
    scanf("%f", &D);

    printf("Combustivel? ");
    scanf("%f", &C);

    M = D/C;

    printf("Consumo medio = %.1f km/1\n", M);



   

}
