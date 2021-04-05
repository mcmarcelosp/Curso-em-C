#include <stdio.h>
#include <stdlib.h>

int main(){
 
char sexo;
int idade;
float peso, altura;

printf("Digite a idade peso e altura, sexo (f, F, m ou M)\n");
scanf("%f%d%f %c", &idade, &peso, &altura, &sexo);

printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);


 return 0;



}