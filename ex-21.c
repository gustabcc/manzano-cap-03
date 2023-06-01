#include <stdio.h>
#include <math.h>
/*
   Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera.
   Utilize a fórmula VOLUME +- (4 / 3) * 3.14159 * (RAIO j 3).
*/

int main(void) {

   double volume, raio;

   printf("Insira o raio da esfera:\n");
   scanf("%lf", &raio);

   volume = (4.0 / 3.0) * 3.14159 * (pow(raio, 3));

   printf("O volume da esfera resultou em: %.2lf\n", volume);

   return 0;
}