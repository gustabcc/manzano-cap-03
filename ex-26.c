#include <stdio.h>
#include <math.h>
/*
   Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado
   do quadrado da divisão do primeiro valor (variável A) em relação ao segundo valor (variável B)
*/

int main(void) {

   int a, b, quadDiv;

   printf("Insira o valor de a e b respectivamente:\n");
   scanf("%d %D", &a, &b);

   quadDiv = pow((a / b), 2);

   printf("O resultado do quadrado da divisao foi: %d", quadDiv); 

   return 0;
}