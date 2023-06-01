#include <stdio.h>

/*
   Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula
   de conversão é F +-- (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura
   em Celsius.
*/

#define F (9 * c + 160) / 5

int main (void) {

   float c;

   printf("Insira a temperatura em Celsius, para realizar a conversão em Fahrenheit: \n");
   scanf("%f", &c);

   F;

   printf("A temperatura de Celsius para Fahrenheit resultou em: %.2f fahrenheit", F);

   return 0;
} 