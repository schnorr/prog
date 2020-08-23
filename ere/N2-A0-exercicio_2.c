/*
  Exercício N2-A0

  1. Fornecer a soma e o produto de
     três valores lidos do teclado
*/
/*
  Algoritmo: somar três valores
  Entradas: três entradas, valores inteiros
  Saída: única saída, valor inteiro com a soma

  0. Início
  1. Ler val1
  2. Ler val2
  3. Ler val3
  4. soma <- val1 + val2 + val3
  5. Escrever soma
  6. Fim.
*/
#include <stdio.h>

int main()
{
  int val1, val2, val3; //Entradas
  int soma; //Saída
  int nlidos; //quantidade de valores lidos pelo scanf
  printf("Entre com os três valores a serem somados: ");
  nlidos = scanf("%d %d %d", &val1, &val2, &val3);
  soma = val1 + val2 + val3;
  printf("Resultado da soma é: %d (de %d valores lidos)\n", soma, nlidos);
  return 0;
}
