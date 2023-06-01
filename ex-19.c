#include <stdio.h>

/*
   Elaborar um programa que leia dois valores numéricos reais desconhecidos representados pelas
   variáveis A e B. Calcular e apresentar os resultados das quatro operações aritméticas básicas.
*/

int main(void) {

   float a, b, soma, subtracao, multiplicacao, divisao;

   printf("Insira dois valores para realizar as operações:\n");
   scanf("%f %f", &a, &b);

   soma= a + b;
   subtracao = a - b;
   multiplicacao = a * b;
   divisao = a / b;

   printf("Soma: a + b = %.2f\nSubtracao: a - b = %.2f\nMultiplicacao: a * b = %.2f\nDivisao: a / b = %.2f", soma, subtracao, multiplicacao, divisao);

   return 0;
}