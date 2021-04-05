#include <stdio.h>
#include <stdlib.h>

/* 1.3 Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua área em metros quadrados.*/

int main(void){
    float C, L, A;

    printf("Medidas? ");
    scanf("%f %f", &L, &C);

    A = C*L;

    printf("Area = %.1f\n", A);
}





/* 1.2  Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a comissão do vendedor seja de 10% do 
total das vendas

int main (void){
    float v, c;

    printf("Vendas? "); 
    scanf("%f", &v);

    c =  0.10 * v;

    printf("Comissao = R$ %.2f\n", c);

    return 0;

}

/*




/*
1.1 Dado um número real qualquer, informe qual é o seu dobro.

int main(){
 float n, d;

 printf("Digite um numero: ");
 scanf("%f", &n);

 d = 2*n;

 printf("Dobro = %.1f\n", d);

 return 0;

}
*/