#include <stdio.h>
#include <math.h>
/*
   Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado
   do quadrado da diferença do primeiro valor (variável A) em relação ao segundo valor (variável B) .
*/

int main(void) {

   int a, b, quadrado, diferenca;

   printf("Insira dois valores respectivamente: \n");
   scanf("%d %d", &a, &b);

   diferenca = a - b;
   quadrado = pow(diferenca, 2);

   printf("O quadrado da diferenca dos valores informados resultaram em: %d", quadrado);

   return 0;
}