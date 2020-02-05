#include <stdio.h>

int main(){

/* Variáveis */

int numero [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int soma = 0;
int x;

/* Loop */

for ( x = 0; x < 10; x++)
{
    soma = soma + numero[x];     
}
printf("A soma dos 10 elementos dá %d \n", soma);
}