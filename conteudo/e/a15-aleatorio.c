/* Programa para exemplificar o uso do rand()
Entradas: não há
Saidas: Impressao de 3 numeros aleatorios */
#include <stdio.h>
#include <stdlib.h>
int main() {
  int cont;
  for (cont = 0; cont < 3; cont++)
    printf("%d ",rand());
  printf("\n");
  return 0;
}
