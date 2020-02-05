#include <stdio.h>

int main(){

/* Variáveis */

float numero [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
float soma = 0;
float media = 0;
int x;

/* Loop */

for ( x = 0; x < 10; x++)
{
    soma = soma + numero[x];
    media = soma / 10;

}
printf("A média dos 10 elementos dá %0.1f \n", media);
}