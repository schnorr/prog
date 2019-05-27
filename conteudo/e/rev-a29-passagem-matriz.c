#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 5
#define MIN 100
#define MAX 200
void le (int mat[][COLUNAS]) {
  int i, j;
  srand(0);
  for (i = 0; i < LINHAS; i++)
    for (j = 0; j < COLUNAS; j++)
      *(mat[0] + i * COLUNAS + j) =
	MIN+(rand()%(MAX-MIN+1));
}
void imprime (int mat[][COLUNAS],
	      char *str) {
  int i, j;
  printf("%s: %s\n",
	 __FUNCTION__, str);
  for (i = 0; i < LINHAS; i++){
    for (j = 0; j < COLUNAS; j++)
      printf("%4d", mat[i][j]);
    printf("\n");
  }
}
void zera_diagonal (int mat[][COLUNAS]) {
  int i, j;
  for (i = 0; i < LINHAS; i++)
    for (j = 0; j < COLUNAS; j++)
      if (i == j)
	*(mat[0] + i * COLUNAS + j) = 0;
}
int main() {
  int M[LINHAS][COLUNAS];
  le (M);
  imprime (M, "Original");
  zera_diagonal (M);
  imprime (M, "Modificada");
  return 0;
}
