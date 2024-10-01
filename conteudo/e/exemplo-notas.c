/* Calcula quantidade de cada cédula (ou moeda) tal que a soma dos
   valores totalize um valor inteiro dado.
   Entrada: valor inteiro
   Saida: quandidade de cedulas/moedas de 200, 100, 50, 20, 10, 5, 2 e 1
   reais */
#include <stdio.h>
int main( )
{
  int valor, v; //valores inteiros lido e usado nos cálculos
  int n200, n100, n50,n20,n10,n5,n2,n1;
  printf("Informe valor inteiro:");
  scanf("%d", &valor);
  v = valor; // copia, para preservar valor lido
  n200 = v/200; // RESULTADO DA DIVISÃO INTEIRA POR 100
  v = v%200;    // RESTO DA DIVISÃO INTEIRA POR 100
  n100 = v/100; // RESULTADO DA DIVISÃO INTEIRA POR 100
  v = v%100;    // RESTO DA DIVISÃO INTEIRA POR 100
  n50 = v/50;
  v = v%50;
  n20 = v/20;
  v = v%20;
  n10 = v/10;
  v = v%10;
  n5 = v/5;
  v = v % 5;
  n2 = v/2;    // RESULTADO DA DIVISÃO INTEIRA POR 2
  n1 = v%2;    // RESTO DA DIVISÃO INTEIRA POR 2

  //quebra 2 linhas e insere caracteres ,00 depois do valor:
  printf("\n\nValor lido: R$%d,00\n",valor); // insere vírgula zero
  printf("notas de 200: %d\n",n100);
  printf("notas de 100: %d\n",n100);
  printf("notas de 50: %d\n",n50);
  printf("notas de 20: %d\n",n20);
  printf("notas de 10: %d\n",n10);
  printf("notas de 5: %d\n",n5);
  printf("notas de 2: %d\n",n2);
  printf("notas de 1: %d\n",n1);
  return 0;
}
