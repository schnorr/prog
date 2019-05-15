#include <stdio.h>
#include <stdlib.h>
//Limites da nossa matriz
#define NL 100
#define NC 30

//Limites de valores aleatórios
#define MIN -10
#define MAX 10
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
}
