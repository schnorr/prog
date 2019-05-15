/* Programa para ilustrar funcionamento de algumas
   operacoes aritmeticas mais complexas. */
#include <stdio.h>
#include <math.h>
int main(void)
{
  float val_1;
  printf("Entre com valor float: ");
  scanf("%f", &val_1);

  printf("Valor fornecido como entrada: [%f]\n", val_1);
  printf("Resultado do ceil           : [%f]\n", ceil(val_1));
  printf("Resultado do floor          : [%f]\n", floor(val_1));
  printf("Resultado do round          : [%f]\n", round(val_1));
  return 0;
}
