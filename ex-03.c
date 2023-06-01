#include <stdio.h> 

/*
   Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula VOLUME +--
   3.14159 *Ri 2 * ALTURA. 
*/


#define VOLUME (pi * (raio * raio) * altura) 

int main (void) {

   float raio, altura;
   float pi = 3.14159;

   printf("Insira a altura e o raio da circunferencia para descobrirmos o volume da lata:\n");
   scanf("%f %f", &altura, &raio);

   VOLUME, raio, altura, pi;

   printf("O volume da lata resultou em: %.2f metros cubicos", VOLUME);

   return 0;
}