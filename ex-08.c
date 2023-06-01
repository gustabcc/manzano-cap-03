#include <stdio.h>

/*
   Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, 
   utilizando a fórmula VOLUME+-- COMPRIMENTO* LARGURA* ALTURA.
*/

#define VOLUME (comprimento * largura * altura)

int main (void) {

   int largura, comprimento,altura;

   printf("Insira o comprimento da caixa: \n");
   scanf("%d", &comprimento);

   printf("Insira a largura da caixa: \n");
   scanf("%d", &largura);

   printf("Insira a altura da caixa: \n");
   scanf("%d", &altura);

   VOLUME, comprimento, largura, altura;

   printf("O volume da caixa retangular resultou em: %d\n metros cubicos",VOLUME);

   return 0;
}