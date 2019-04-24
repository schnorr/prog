#include <stdio.h>
#include <stdlib.h>
//Limites da nossa matriz
#define ORDEM 10
//Limites de valores aleatórios
#define MIN 1
#define MAX 99

int main(){
  //A matriz m e seus índices
  int m[ORDEM][ORDEM] = {0};
  int mt[ORDEM][ORDEM] = {0};
  int l, c;

  // Define a semente para aleatórios
  srand(0);

  // inicializar a matriz
  // com valores aleatórios
  for (l = 0; l < ORDEM; l++)
    for (c = 0; c < ORDEM; c++)
      m[l][c] =
	MIN+(rand()%(MAX-MIN+1));

  // gera a transposta
  for (l = 0; l < ORDEM; l++)
    for (c = 0; c < ORDEM; c++)
      mt[l][c] = m[c][l];

  // imprime m
  printf("Original:\n");
  for (l = 0; l < ORDEM; l++){
    for (c = 0; c < ORDEM; c++)
      printf("%2d ", m[l][c]);
    printf("\n");
  }

  // imprime mt
  printf("Transposta:\n");
  for (l = 0; l < ORDEM; l++){
    for (c = 0; c < ORDEM; c++)
      printf("%2d ", mt[l][c]);
    printf("\n");
  }
  return 0;
}
