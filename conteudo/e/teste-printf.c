//teste saida printf
#include <stdio.h>
int main( )
{
  float valor=99.7567892;
  printf("Valor com 9f   = [%9f]\n", valor);
  printf("Valor com 9.0f = [%9.0f]\n", valor);
  printf("Valor com 9.1f = [%9.1f]\n", valor);
  printf("Valor com 9.2f = [%9.2f]\n", valor);
  printf("Valor com 9.3f = [%9.3f]\n", valor);
  printf("Valor com 1.2f = [%1.2f]\n", valor);
  return 0;
}
