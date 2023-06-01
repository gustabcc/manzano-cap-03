#include <stdio.h>

int main() {
   int votosValidosA, votosValidosB, votosValidosC;
   int votosNulos, votosEmBranco;
   int totalEleitores;
   double percentValidos, percentA, percentB, percentC, percentNulos, percentBranco;

   printf("Digite a quantidade de votos válidos para o candidato A: ");
   scanf("%d", &votosValidosA);

   printf("Digite a quantidade de votos válidos para o candidato B: ");
   scanf("%d", &votosValidosB);

   printf("Digite a quantidade de votos válidos para o candidato C: ");
   scanf("%d", &votosValidosC);

   printf("Digite a quantidade de votos nulos: ");
   scanf("%d", &votosNulos);

   printf("Digite a quantidade de votos em branco: ");
   scanf("%d", &votosEmBranco);

   totalEleitores = votosValidosA + votosValidosB + votosValidosC + votosNulos + votosEmBranco;

   percentValidos = (double)(votosValidosA + votosValidosB + votosValidosC) / totalEleitores * 100;
   percentA = (double)votosValidosA / totalEleitores * 100;
   percentB = (double)votosValidosB / totalEleitores * 100;
   percentC = (double)votosValidosC / totalEleitores * 100;
   percentNulos = (double)votosNulos / totalEleitores * 100;
   percentBranco = (double)votosEmBranco / totalEleitores * 100;

   printf("\nResultados da Eleição\n");
   printf("Total de Eleitores: %d\n", totalEleitores);
   printf("Percentual de Votos Válidos: %.2lf%%\n", percentValidos);
   printf("Percentual de Votos Válidos para o Candidato A: %.2lf%%\n", percentA);
   printf("Percentual de Votos Válidos para o Candidato B: %.2lf%%\n", percentB);
   printf("Percentual de Votos Válidos para o Candidato C: %.2lf%%\n", percentC);
   printf("Percentual de Votos Nulos: %.2lf%%\n", percentNulos);
   printf("Percentual de Votos em Branco: %.2lf%%\n", percentBranco);

   return 0;
}
