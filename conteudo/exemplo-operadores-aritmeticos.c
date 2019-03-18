/* Programa para ilustrar funcionamento dos operadores aritmeticos */
#include <stdio.h>
int main ()
{
  int val_1, val_2;
  int divisao, resto;

  val_1 = 13;
  val_2 = 5;
  divisao = val_1 / val_2;
  resto = val_1 % val_2;
  printf("Divisao inteira = %d Resto = %d\n", divisao, resto);
  return 0;
}
