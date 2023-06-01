#include <stdio.h>

/*
   Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula
   de conversão é C +-- ((F - 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura
   em Celsius. 
*/

#define C ((f - 32) * 5) / 9

int main(void) {

   float f;

   printf("Insira a temperatura em graus Fahrenheit:\n");
   scanf("%f", &f);

   C * f;

   printf("A conversão de graus Fahrenheit para graus Celsius resultou em %.2f graus Celsius", C);

   return 0;
}