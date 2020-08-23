/* 
  Exercício N2-A0

  Escrever um algoritmo que lê o número de um vendedor, e
  o valor da venda efetuada, e o percentual sobre a venda.
  Fornecer número do vendedor e sua comissão.
*/

/*
  Algoritmo Comissao

  Entradas: número de um vendedor, valor da venda efetuada, percentual
  Saídas: número do vendedor, valor comissão

  0. Início
  1. Ler numero_vendedor
  2. Ler valor_venda
  3. Ler percentual
  4. comissao <- valor_venda * (percentual/100)
  5. Escrever numero_vendedor, comissao
  6. Fim
*/
#include<stdio.h>

int main()
{
  // Entradas
  int numero_vendedor; // Deve ser impresso na saída também
  float valor_venda;
  float percentual;
  //Saídas
  float comissao;

  printf("Número do vendedor: ");
  scanf("%d", &numero_vendedor);
  printf("Valor da venda: ");
  scanf("%f", &valor_venda);
  printf("Percental da comissao: ");
  scanf("%f", &percentual);
  comissao = valor_venda * percentual/100;
  printf("Número do vendedor: %d\nComissao: %.2f\n", numero_vendedor, comissao);
  return 0;
}
