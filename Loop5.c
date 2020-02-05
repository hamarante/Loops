#include <stdio.h>

int main(){

/* Variáveis */

int x;
int tabuada;
int total = 0;
/* Inputs e Outputs */

printf("Tabuada de que número? \n");
scanf("%d", &tabuada);

/* Loop */

for (x = 0; x <= 10; x++)
{
 total = tabuada * x;
 printf("%d * %d = %d \n", tabuada, x, total);
}

}