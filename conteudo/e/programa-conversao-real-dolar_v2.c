/* Programa que converte um valor em reais para dolares.
   Entradas: valor em reais, taxa de conversão
   Saída: valor em dólares */
#include <stdio.h> // biblioteca para I/O
int main() // programa principal
{
  float preco_real, taxa; // entradas
  float preco_dolar; //saída

  printf("Informar preco em real: R$ ");
  scanf("%f",&preco_real);

  //le e armazena na variável
  printf("Informar taxa de conversao: R$ ");
  scanf("%f",&taxa);

  //le e armazena na variável
  preco_dolar = preco_real/taxa;
  printf("O preco em dolar vale: US$ %4.2f", preco_dolar);
  return 0; // encerra funcao main
}
