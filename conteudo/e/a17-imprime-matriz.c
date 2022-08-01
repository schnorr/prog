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

  // imprimir o cabeçalho
  printf("   ");
  for (c = 0; c < NC; c++){
    printf("%2d ", c);
  }
  printf("\n");
  // imprimir o conteúdo da matriz
  for (l = 0; l < NL; l++){
    printf("%2d ", l);
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
