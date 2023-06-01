#include <stdio.h>

/*
   Elaborar um programa que leia quatro valores numéricos inteiros (variáveis A, B, C e D). Ao final
   o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro valor,
   e o resultado da soma (variável S) do segundo com o quarto valor
*/

int main(void) {
   
   int a, b, c, d, p, s;

   printf("Insira quatro valores respectivamente:\n");
   scanf("%d %d %d %d", &a, &b, &c, &d);

   p = a * c;
   s = b + d;

   printf("O resultado da soma foi: %d\nO resultado do produto foi: %d\n", s, p);
   
   return 0;
}