#include <stdio.h>

/*
   Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A
   passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. 
   Apresentar os valores após a efetivação do processamento da troca.
*/

int main(void) {

   int a, b, c;

   printf("Insira o valor de a e b respectivamente: \n");
   scanf("%d %d", &a, &b);

   printf("Antes da conversao:\n a = %d, b = %d\n", a ,b);

   c = a;
   a = b;
   b = c;

   printf("Depois da conversao:\n a = %d, b = %d", a, b);

   return 0;
}