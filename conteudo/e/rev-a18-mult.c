#include <stdio.h>
#include <stdlib.h> // srand rand
//dimensões da matriz esparsa
#define MAXL 18 // número de linhas
#define MAXC 18 // número de colunas
// para geração de números aleatórios
#define MIN 10
#define MAX 99

int main(){
  int m[MAXL][MAXC] = { 0 };
  int i;
  int j;
  int k;
  int acumulador;

  // preenchimento com números aleatórios entre MIN e MAX
  // obedecendo o fator que indica valores não nulos
  srand(0);
  for (i = 0; i < MAXL; i++) {
    for (j = 0; j < MAXC; j++) {
      m[i][j] = MIN+(rand()%(MAX-MIN+1));
    }
  }

  printf("Matriz\n");
  for (i = 0; i < MAXL; i++) {
    for (j = 0; j < MAXC; j++) {
      printf("%3d", m[i][j]);
    }
    printf("\n");
  }
  /* 1111111111111111111111111111111 */
  printf("\n-1-\n");
  for (i = 0; i < MAXL; i++) {
    for (j = 0; j < MAXC; j++) {
      if (i >= 1 && i < MAXL-1 &&
	  j >= 1 && j < MAXC-1) {
	printf("%3d", m[i][j]);
      }else{
	printf(" __");
      }
    }
    printf("\n");
  }
  
  /* 2222222222222222222222222222222 */
  printf("\n-2-\n");
  for (i = 0; i < MAXL; i++) {
    for (j = 0; j < MAXC; j++) {
      if (j == 0 || j == MAXC-1 || i == j) {
	printf("%3d", m[i][j]);
      }else{
	printf(" __");
      }
    }
    printf("\n");
  }
  
  /* 3333333333333333333333333333333 */
  printf("\n-3-\n");
  k = 3;
  for (i = 0; i < MAXL; i++) {
    for (j = 0; j < MAXC; j++) {
      if (j == 0 || i%2 == 0 && j < k) {
	printf("%3d", m[i][j]);
      }else{
	printf(" __");
      }
    }
    printf("\n");
    if (i % 2 == 0){
      k++;
    }
  }
  
  /* 4444444444444444444444444444444 */  
  printf("\n-4-\n");
  for (i = 0; i < MAXL; i++) {
    for (j = 0; j < MAXC; j++) {
      if (j > i) {
	printf("%3d", m[i][j]);
      }else{
	printf(" __");
      }
    }
    printf("\n");
  }
  
  /* 5555555555555555555555555555555 */
  printf("\n-5-\n");
  for (i = 0; i < MAXL; i++) {
    for (j = 0; j < MAXC; j++) {
      if (j < MAXL-i-1) {
	printf("%3d", m[i][j]);
      }else{
	printf(" __");
      }
    }
    printf("\n");
  }
  
  /* 6666666666666666666666666666666 */
  printf("\n-6-\n");
  k = 1;
  for (i = 0; i < MAXL; i++) {
    for (j = 0; j < MAXC; j++) {
      if (j >= k && j < MAXC-k) {
	printf("%3d", m[i][j]);
      }else{
	printf(" __");
      }
    }
    printf("\n");
    if (i >= MAXL/2) {
      k--;
    }else{
      k++;
    }
  }
  return 0;
}

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
