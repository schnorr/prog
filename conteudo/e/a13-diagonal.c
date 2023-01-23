#include <stdio.h>
#include <stdlib.h>
//Limites da nossa matriz
#define ORDEM 15
//Limites de valores aleatórios
#define MIN 1
#define MAX 99
int main(){
  //A matriz m e seus índices
  int m[ORDEM][ORDEM] = {0};
  int l, c;
  //acumulador da soma
  int soma;

  // Define a semente para aleatórios
  srand(0);

  // inicializar a matriz
  // com valores aleatórios
  for (l = 0; l < ORDEM; l++)
    for (c = 0; c < ORDEM; c++)
      m[l][c] = MIN+(rand()%(MAX-MIN+1));

  // somatório da diagonal principal
  soma = 0;
  for (l = 0; l < ORDEM; l++){
    soma += m[l][l];
  }

  // imprimir a matriz
  printf("Matriz\n");
  for (l = 0; l < ORDEM; l++){
    for (c = 0; c < ORDEM; c++)
      printf("%2d ", m[l][c]);
    printf("\n");
  }
  printf("Média da diagonal: %.2f\n",
	 (float)soma/ORDEM);
  return 0;
}
