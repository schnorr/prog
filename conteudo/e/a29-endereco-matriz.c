#include <stdio.h>
#define LINHAS 2
#define COLUNAS 10
void imprime (int m[][COLUNAS]);
int main() {
  int M[LINHAS][COLUNAS] = { { 1,   2,  3,  4,  5,  6,  7,  8,  9, 10 },
                             { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 } };
  imprime(M);
  return 0;
}

void imprime (int m[][COLUNAS]) {
  int i, j;
  for (i = 0; i < LINHAS; i++)
    for (j = 0; j < COLUNAS; j++)
      printf("matriz[%d][%d] = %d\n",
	     i, j,
	     *(m[0] + i * COLUNAS + j));
}
