// Programa para verificar se um nro natural lido é par ou impar
// Analisa o resto da divisao inteira por 2
#include<stdio.h>
int main()
{
  int valor;
  printf("Digite o valor a ser testado: ");
  scanf("%d", &valor);

  //analisa resto da divisao inteira
  if ( 0 == valor%2)
    printf("Valor eh par!\n");
  else
    printf("Valor eh impar!\n");
  return 0;
}
