#include <stdio.h>
#define MAXL 5 // número de linhas
#define MAXC 5 // número de colunas
int main() {
  //a matriz esparsa
  int esparsa[MAXL][MAXC] = {0};
  //a matriz condensada com mais ou menos 1/3 dados
  int condensada[(MAXL*MAXC)/3+1][3] = {0};
  //índices da esparsa
  int l, c;
  //índice linha da condensada
  int lc;

  //leitura dos dados
  for (l = 0; l < MAXL; l++) {
    for (c = 0; c < MAXC; c++) {
      printf("Elemento [%d][%d]: ", l, c);
      scanf("%d", &esparsa[l][c]);
    }
  }

  //percorre esparsa
  lc = 0; //zero o índice da condensada
  for (l = 0; l < MAXL; l++) {
    for (c = 0; c < MAXC; c++) {
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
  for (l = 0; l < MAXL; l++) {
    for (c = 0; c < MAXC; c++) {
      printf("%2d ", esparsa[l][c]);
    }
    printf("\n");
  }

  //imprime
  printf("Condensada\n");
  for (l = 0; l < (MAXL*MAXC)/3+1; l++) {
    for (c = 0; c < 3; c++) {
      printf("%2d ", condensada[l][c]);
    }
    printf("\n");
  }
  return 0;
}
