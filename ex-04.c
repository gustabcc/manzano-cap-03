#include <stdio.h>

/*
   Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um
   automóvel que faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo
   gasto (variável TEMPO) e a velocidade média (variável VELOCIDADE) durante a viagem. Desta
   forma, será possível obter a distância percorrida com a fórmula DISTÂNCIA +-- TEMPO *
   VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível
   utilizada na viagem com a fórmula LITROS_USADOS +-- DISTÂNCIA/ 12. O programa deve
   apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
   quantidade de litros utilizada na viagem. 
*/
 
#define DISTANCIA tempo * velocidade
#define EFICIENCIA (DISTANCIA / 12)

int main(void) {

   int tempo, velocidade;

   printf("Insira o tempo percorrido e a velocidade em que foi feito o trajeto: \n");
   scanf("%d %d", &tempo, &velocidade);

   DISTANCIA;

   printf("A distancia total foi de %d km e o total de litros gasto na viagem foi de %d litros de gasolina.", DISTANCIA, EFICIENCIA);
   return 0;
}