#include <stdio.h>
#include <math.h>
/*
   Elaborar um programa que calcule e apresente o valor do resultado da área de uma circunferência (variável A). 
   O programa deve solicitar a entrada do valor do raio da circunferência (variável R). 
   Para a execução deste problema utilize a fórmula A+- 3.14159265* R j 2. 
*/


int main(void) {
   
   int raio, a;
   float pi = 3.14159;

   printf("Insira o valor do raio da circunferencia:\n");
   scanf("%d", &raio);

   a = pi * pow(raio, 2);

   printf("A area da circunferencia resultou em: %d metros", a);
   
   return 0;
}