#include <stdio.h>
#include <stdlib.h>
#define LIM_ARRANJO 4
#define MIN 1
#define MAX 35
int main() {
  int a[LIM_ARRANJO], aux;
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
  // Ordenação por Seleção
  for (i = 0; i < LIM_ARRANJO; i++){
    for (j = i; j < LIM_ARRANJO; j++){
      if (a[j] < a[i]){
	aux = a[i];
	a[i] = a[j];
	a[j] = aux;
      }
    }
  }
  // Imprimir o resultado do ordenamento
  printf("Após  -> ");
  for (i = 0; i < LIM_ARRANJO; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}
