#include <stdio.h>
#include <stdlib.h>

int main(){
 
char sexo;
int idade;
char a, b;

printf("Digite duas letras: ");
scanf("%c %c", &a, &b);

printf("Primeira letra: %c\n Segunda letra: %c\n", a, b);

// fflush(); funciona somente no Windows

 return 0;



}