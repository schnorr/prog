#include <stdio.h>
#include <stdlib.h>
#define LIM_ARRANJO 4
#define MIN 1
#define MAX 35
int main() {
  int a[LIM_ARRANJO], aux;
  int sinal; // sinal de troca
  int i, j; // índices do arranjo
  srand(0);
  //Obter valores aleatórios
  //e imprimir na tela
  printf("Antes -> ");
  for (i = 0; i < LIM_ARRANJO; i++){
    a[i] = MIN+(rand()%(MAX-MIN+1));
    printf("%d ", a[i]);
  }
  printf("\n");
  // Ordenação por Bolha
  do {
    sinal = 0;
    for (i = 0; i < LIM_ARRANJO-1; i++)
      if (a[i] > a[i+1]) {
 	  aux = a[i];
	  a[i] = a[i+1];
	  a[i+1] = aux;
	  sinal = 1;
      }
  } while (sinal == 1);
  // Imprimir o resultado do ordenamento
  printf("Após  -> ");
  for (i = 0; i < LIM_ARRANJO; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}
