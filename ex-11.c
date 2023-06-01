#include <stdio.h>

/*
   Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar
   (US$). O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares
   disponível com o usuário.
*/

int main(void) {

   int real, dolar, conversao, cotacao;

   printf("Insira a quantidade de dolares para realizar a conversao:\n");
   scanf("%d", &dolar);

   printf("Qual o valor da cotacao do dolar no dia de hoje?\n");
   scanf("%d", &cotacao);

   real = cotacao;
   conversao = dolar * real;

   printf("A conversao de dolares para reais resultou em: %d reais", conversao);

   return 0;
}