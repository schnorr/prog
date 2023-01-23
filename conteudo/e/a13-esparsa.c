#include <stdio.h>
#include <stdlib.h>
#define N 5 // ordem
#define MIN 0
#define MAX 9
int main() {
  //a matriz esparsa
  int esparsa[N][N] = {0};
  //a matriz condensada com mais ou menos 1/3 dados
  int condensada[(N*N)/3+1][3] = {0};
  //índices da esparsa
  int l, c;
  //índice linha da condensada
  int lc;

  srand(0);

  //geração dos dados esparsos
  for (l = 0; l < N; l++) {
    for (c = 0; c < N; c++) {
      int aleatorio = rand();
      if (aleatorio < 2*(float)RAND_MAX/3){
	   esparsa[l][c] = 0;
      }else{
	   esparsa[l][c] = MIN +
	     (aleatorio % (MAX-MIN+1));
      }
    }
  }



  //percorre esparsa
  lc = 0; //zero o índice da condensada
  for (l = 0; l < N; l++) {
    for (c = 0; c < N; c++) {
      if(esparsa[l][c]){
	  condensada[lc][0] = esparsa[l][c];
	  condensada[lc][1] = l;
	  condensada[lc][2] = c;
	  lc++;
      }
    }
  }

  //imprime
  printf("\n");
  printf("Esparsa\n");
  for (l = 0; l < N; l++) {
    for (c = 0; c < N; c++) {
      printf("%2d ", esparsa[l][c]);
    }
    printf("\n");
  }

  //imprime
  printf("Condensada\n");
  for (l = 0; l < (N*N)/3+1; l++) {
    for (c = 0; c < 3; c++) {
      printf("%2d ", condensada[l][c]);
    }
    printf("\n");
  }
  return 0;
}
