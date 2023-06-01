#include <stdio.h>
#include <math.h>

/*
   Efetuar a leitura de um valor numérico inteiro e apresentar o resultado do valor lido elevado ao quadrado
*/

int main(void) {

   float x, quadrado;

   printf("Insira um valor para ser elevado ao quadrado:\n");
   scanf("%f", &x);

   quadrado = pow(x, 2);

   printf("O numero elevado ao quadrado resultou em: %.2f", quadrado);

   return 0;
}