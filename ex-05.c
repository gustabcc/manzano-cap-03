#include <stdio.h>

/*
   Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a
   fórmula PRESTAÇÃO+-- VALOR+ (VALOR* (TAXA/100) * TEMPO).
*/

int main (void) {

   int valor, taxa, tempo;
   int prestacao;

   printf("Insira o valor total da conta: \n");
   scanf("%d", &valor);

   printf("Insira o valor da taxa de juros: \n");
   scanf("%d", &taxa);

   printf("Insira o tempo em meses para pagar: \n");
   scanf("%d", &tempo);

   prestacao = valor + (valor * (taxa/100) * tempo);

   printf("O valor total da conta resultou em %d R$", prestacao);


   return 0;
}