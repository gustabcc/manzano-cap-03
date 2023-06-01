#include <stdio.h>
#include <math.h>

/*
   Construir um programa que leia três valores numéricos inteiros (representados pelas variáveis A,
   B e C) e apresente como resultado final o valor da soma dos quadrados dos três valores lidos
*/

int main(void) {

   int a, b, c, q1, q2, q3, resultado;

   printf("Insira tres valores respectivamente:\n");
   scanf("%d %d %d", &a, &b, &c);

   q1 = pow(a, 2);
   q2 = pow(b, 2);
   q3 = pow(c, 2);

   resultado = q1 + q2 + q3;

   printf("O valor total da soma dos valores ao quadrado resultou em: %d", resultado);

   return 0;
}