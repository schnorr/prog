/*
  Exercício N2-A0

  2. Calcular o preço a ser pago em
     uma loja, sendo informado o preço
     do produto comprado e o número de
     unidades adquiridas (1 só produto -
     várias unidades deste produto)
*/
/*
  Algoritmo: calcular preço a ser pago
  Entradas: preço do produto, número de unidades adquiridas
  Saída: preço a ser pago

  0. Início
  1. Ler preco_do_produto
  2. Ler quantidade
  3. preco <- preco_do_produto * quantidade
  4. Escrever preco
  5. Fim
*/
#include <stdio.h>

int main()
{
  // Entradas
  float preco_do_produto;
  int quantidade;
  // Saída
  float preco;

  printf("Entre com o preço unitário do produto e a quantidade: ");
  scanf("%f %d", &preco_do_produto, &quantidade);
  preco = preco_do_produto * quantidade;
  printf("Preço a ser pago: %.2f\n", preco);

  return 0; //termina tudo bem
}
