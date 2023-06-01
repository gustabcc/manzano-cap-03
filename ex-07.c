#include <stdio.h>

/*
   Ler quatro valores numéricos inteiros e apresentar o resultado das adições e das multiplicações
   utilizando o mesmo raciocínio aplicado quando do uso de propriedades distributivas para a
   máxima combinação possível entre as quatro variáveis. Não é para calcular a propriedade distributiva, 
   apenas para usar a sua forma de combinação. Considerando a leitura de valores para as
   variáveis A, B, C e D, devem ser feitas seis adições e seis multiplicações, ou seja, 
   deve ser combinada a variável A com a variável B, a variável A com a variável C, a variável A com a variável D.
   Depois é necessário combinar a variável B com a variável C e a variável B com a variável D e,
   por fim, a variável C será combinada com a variável D. 
*/

int main(void) {

   int a, b, c, d;
   int add1, add2, add3, add4, add5, add6;
   int mult1, mult2, mult3, mult4, mult5, mult6;

   printf("Insira os valores de a, b, c e d, respectivamente:\n");
   scanf("%d %d %d %d", &a, &b, &c, &d);

   printf("A = %d\nB = %d\nC = %d\nD = %d\n", a, b, c, d);

   // 6 somas
   add1 = a + b;
   add2 = a + c;
   add3 = a + d;
   add4 = b + c;
   add5 = b + d;
   add6 = c + d;

   // 6 multiplicações
   mult1 = a * b;
   mult2 = a * c;
   mult3 = a * d;
   mult4 = b * c;
   mult5 = b * d;
   mult6 = c * d;

   printf("As seis somas foram:\ns1 = %d\ns2 = %d\ns3 = %d\ns4 = %d\ns5 = %d\ns6 = %d\n", add1, add2, add3, add4, add5, add6);
   printf("As seis multiplicacoes foram:\nm1 = %d\nm2 = %d\nm3 = %d\nm4 = %d\nm5 = %d\nm6 = %d\n", mult1, mult2, mult3, mult4, mult5, mult6);
   return 0;
}