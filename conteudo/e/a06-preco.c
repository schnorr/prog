/*Calcula preco a ser cobrado por um servico
  Entrada: tempo de produção e tempo de projeto
  Saida: valor do servico */
#include <stdio.h>
int main ( )
{
  int tempo_prod, tempo_projeto;
  printf("Tempo de projeto: ");
  scanf("%d", &tempo_projeto);
  printf("Tempo de producao: ");
  scanf("%d", &tempo_prod);
  switch (tempo_prod + tempo_projeto) {
    case 2 : printf ("\nPreco: R$ 1.000,00\n");
      break;
    case 3 : printf ("\nPreco: R$ 1.500,00\n");
      break;
    case 4 : printf ("\nPreco: R$ 2.000,00\n");
      break;
    default: printf ("\nPreco: R$ 2.500,00\n");
  }
  return 0;
}
