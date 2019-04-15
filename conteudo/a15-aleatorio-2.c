/* Programa para exemplificar o uso do rand()
Entradas: não há
Saidas: Impressao de 3 numeros aleatorios */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int cont;
  srand(time(NULL));
  for (cont = 0; cont < 3; cont++)
    printf("%d ",rand());
  printf("\n");
  return 0;
}
