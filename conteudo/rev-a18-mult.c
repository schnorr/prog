#include <stdio.h>
#define MAX 100
// Multiplicação de matrizes
int main (){
  float A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
  int r, s, t;
  int l, c, k;
  float soma;
  //Ler r, s e t
  printf("Valor de r: ");
  scanf("%d", &r);
  printf("Valor de s: ");
  scanf("%d", &s);
  printf("Valor de t: ");
  scanf("%d", &t);
  //Validações
  if (!(
	r > 0 && s > 0 && t > 0 &&
	r < MAX && s < MAX && t < MAX)){
    printf("r, s e t tem que ser maior "
	   "que zero e menor que %d\n", MAX);
    return 0;
  }
  //Ler a matriz A
  for (l = 0; l < r; l++){
    for (c = 0; c < s; c++){
      printf("Matriz A[%d][%d]: ", l, c);
      scanf("%f", &A[l][c]);
    }
  }

  //Ler a matriz B
  for (l = 0; l < s; l++){
    for (c = 0; c < t; c++){
      printf("Matriz B[%d][%d]: ", l, c);
      scanf("%f", &B[l][c]);
    }
  }

  // Realiza a multiplicação, colocar em C
  for (l = 0; l < r; l++) {
    for (c = 0; c < t; c++) {
      /* cálculo do produto da linha l pela coluna c */
      soma = 0;
      for (k = 0; k < s; k++) {
	soma += A[l][k] * B[k][c];
      }
      // coloca na matriz C o resultado do somatório
      C[l][c] = soma;
    }
  }

  //Imprime a matriz C
  printf("\nC\n");
  for (l = 0; l < r; l++){
    for (c = 0; c < t; c++)
      printf("%2.2f ", C[l][c]);
    printf("\n");
  }
  return 0;
}
