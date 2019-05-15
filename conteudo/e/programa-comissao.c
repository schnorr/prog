/*
 Este programa calcula a comissão de um vendedor

 Entradas: NumVendedor, ValorVenda, Percentual
 Saída: NumVendedor, Comissao,

*/
#include <stdio.h>

int main()
{
  int numVendedor;
  float valorVenda;
  float percentual;
  float comissao;

  printf("Informe o número do vendedor e o\n"
	 "valor da venda, separado por espaços:\n");

  scanf("%d %f\n", &numVendedor, &valorVenda);

  printf("Informe o percentual da comissão:\n");

  scanf("%f\n", &percentual);

  comissao = valorVenda * percentual / 100;

  printf("A comissao tem o valor de: %.2f\n", comissao);

  return 0;
}
