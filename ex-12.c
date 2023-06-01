#include <stdio.h>

/*
   Elaborar um programa que apresente o valor da conversão em dólar (US$) de um valor lido em real
   (R$). O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível com o usuário.
*/

int main(void) {

   int real;
   float conversao, cotacao;
   printf("Insira a quantidade de reais para realizar a conversao:\n");
   scanf("%d", &real);

   printf("Insira a cotacao do real no dia de hoje:\n");
   scanf("%f", &cotacao);

   conversao = real * cotacao;

   printf("O valor da conversao de reais para dolar resultou em: %.2f dolares", conversao);

   return 0;
}