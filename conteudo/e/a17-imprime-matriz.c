#include <stdio.h>
#include <stdlib.h>

//Limites da nossa matriz
#define NL 10
#define NC 3

//Limites de valores aleatórios
#define MIN 1
#define MAX 99

int main(){
  //A matriz m e seus índices
  int m[NL][NC];
  int l, c;

  // Define a semente para aleatórios
  srand(0);

  // inicializar a matriz
  // com valores aleatórios
  for (l = 0; l < NL; l++){
    for (c = 0; c < NC; c++){
      m[l][c] = MIN+(rand()%(MAX-MIN+1));
    }
  }

  // imprimir a matriz
  for (l = 0; l < NL; l++){
    for (c = 0; c < NC; c++){
      printf("%2d", m[l][c]);
      if (c+1 < NC){
	printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
