/* Imprime uma mensagem, de acordo com um código lido - solução usando if simples
   Entrada: valor (inteiro) lido do teclado; Saida: Mensagem na tela */
#include <stdio.h>
int main ( )
{
  int cod;
  printf("Codigo (1 a 4): ");
  scanf ("%d", &cod);
  if (cod == 1)
    printf ("\nMensagem 1\n");
  else if (cod == 2)
    printf ("\nMensagem 2\n");
  else if (cod == 3)
    printf ("\nMensagem 3\n");
  else if (cod == 4)
    printf ("\nMensagem 4\n");
  else if (cod < 1 || cod > 4)
    printf ("\nMensagem de erro\n");
  return 0;
}
