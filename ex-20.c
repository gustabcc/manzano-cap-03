#include <stdio.h>

/*
   Construir um programa que calcule e apresente em metros por segundo o valor da velocidade de
   um projétil que percorre uma distância em quilômetros a um espaço de tempo em minutos. Utilize
   a fórmula VELOCIDADE+- (DISTÂNCIA* 1000) /(TEMPO* 60)
*/

int main(void) {

   int distancia, tempo, velocidade;

   printf("Insira a distancia do alvo em km:\n");
   scanf("%d", &distancia);

   printf("Tempo que levou para acertar o alvo:\n");
   scanf("%d", &tempo);

   velocidade = (distancia * 1000) / (tempo * 60);

   printf("A velocidade do projetil foi de: %d m/s", velocidade);

   return 0;
}