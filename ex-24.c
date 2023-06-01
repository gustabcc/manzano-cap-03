#include <stdio.h>
#include <math.h>

/*
   Elaborar um programa que calcule uma raiz de base qualquer com índice qualquer.
*/

int main(void) {

   float numero, raiz;

   printf("Insira um numero:\n");
   scanf("%f", &numero);

   raiz = sqrt(numero);

   printf("A raiz quadrada do numero %.0f resultou em %.0f", numero, raiz);

   return 0;
}