#include <stdio.h>

/*
   Elaborar um programa que leia o valor numérico correspondente ao salário mensal (variável SM)
   de um trabalhador e também faça a leitura do valor do percentual de reajuste (variável PR) a ser
   atribuído. Apresentar o valor do novo salário (variável NS).
*/

int main(void) {

   int sm, ns;
   float pr;

   printf("Insira o valor do salario atual: \n");
   scanf("%d", &sm);

   printf("Qual o percentual de reajuste do salario?\n");
   scanf("%f", &pr);

   ns = (pr * sm) + sm;

   printf("O valor do novo salario resultou em: %d", ns);


   return 0;
}