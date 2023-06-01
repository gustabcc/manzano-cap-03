#include <stdio.h>

/*
   Elaborar um programa que leia uma medida em pés e apresente o seu valor convertido em
   metros, lembrando que um pé mede 0,3048 metro, ou seja, um pé é igual a 30,48 centímetros.
*/

int main(void) {

   float pes, metros;

   printf("Insira o valor da medida em pes:\n");
   scanf("%f", &pes);

   metros = pes * 0.3048;

   printf("A medida em metros resultou em: %.2f metros", metros);
   
   return 0;
}

