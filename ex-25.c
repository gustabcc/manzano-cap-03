#include <stdio.h>

/*
   Construir um programa que leia um valor numérico inteiro e apresente como resultado os seus
   valores sucessor e antecessor
*/

int main(void) {
   
   int numero, ant, suc;

   printf("Insira um numero:\n");
   scanf("%d", &numero);

   ant = numero - 1;
   suc = numero + 1;

   printf("Antecessor: %d\nNumero: %d\nSucessor: %d", ant, numero, suc);

   return 0;
}