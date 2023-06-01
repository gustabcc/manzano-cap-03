#include <stdio.h>
#include <math.h>
/*
   Elaborar um programa que leia dois valores numéricos inteiros, os quais devem representar a
   base e o expoente de uma potência, calcule a potência e apresente o resultado obtido.
*/

int main(void) {

   int base, expoente, potencia;

   printf("Insira a base:\n");
   scanf("%d", &base);

   printf("Insira o expoente:\n");
   scanf("%d", &expoente);

   potencia = pow(base, expoente);

   printf("A potencia da base %d^%d resultou em %d", base, expoente, potencia);

   return 0;
}