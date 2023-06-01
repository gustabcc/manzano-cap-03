#include <stdio.h>
#include <math.h>

/*
   Construir um programa que leia três valores numéricos inteiros (representados pelas variáveis A,
   B e C) e apresente como resultado final o valor do quadrado da soma dos três valores lidos. 
*/

int main(void) {

   int a, b, c, soma, resultado;

   printf("Insira tres valores respectivamente:\n");
   scanf("%d %d %d", &a, &b, &c);

   soma = a + b + c;
   resultado = pow(soma, 2);

   printf("O valor do quadrado da soma dos tres valores resultou em %d", resultado);

   return 0;
}