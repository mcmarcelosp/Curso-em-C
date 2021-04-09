#include <stdio.h>
#include <stdlib.h>


/* 1.6 Dadas as medidas de uma sala em metros(comprimento e largura), bem como o preço do metro quadrado de carpete, informe
o custo total para forrar o piso da sala */

int main (void){
float c, l, p, t;

printf("Digite o Comprimento: ");
scanf("%f", &c);

printf("Digite a Largura: ");
scanf("%f", &l);

printf("Digite o preco: ");
scanf("%f", &p);



t = c * l * p;

printf("O custo do carpete: %.2f\n", t);


    return 0;
}







/* 1.6 Dados um valor em real e a cotação do dólar, converta esse valor em dólares 

int main (void){



    return 0;
}

*/


/*1.5 Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago. Considere que o percentual de desconto 
é um número real entre 0 e 1. 

int main(void) {
    float c, d, p;

    printf("Digite o valor da compra: ");
    scanf("%f", &c);

    printf("Digite o valor do desconto: ");
    scanf("%f", &d);

    p =  c - p * d;
    
    printf("Pagamento = %.2f\n", p);

    return 0;
    
    }

*/



/*1.4 Dados um salário e um percentual de reajuste, calcule o salário reajustado. Considere que o percentual de reajuste é dado 
por um número real entre 0 e 1. Por exemplo, se o reajuste for de 15%, o usuário deve digitar o número 0.15. 

int main(void) {
    float s, r, n;

    printf("Digite o seu Salario: ");
    scanf("%f", &s);
    printf("Qual foi o Reajuste? ");
    scanf("%f", &r);

    n = s + s*r;

    printf("Novo salario = %.2f\n", n);
}

*/





/* 1.3 Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua área em metros quadrados.

int main(void){
    float C, L, A;

    printf("Medidas? ");
    scanf("%f %f", &L, &C);

    A = C*L;

    printf("Area = %.1f\n", A);
}

*/



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