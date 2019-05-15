#include <stdio.h>
#define MAX 5
int main () {
  // Qtdade de incógnitas
  int n;
  // Matriz de Coeficientes
  float a[MAX][MAX] = {0};
  // Vetor de Termos Indep.
  float b[MAX] = {0};
  // Vetor solução
  float x[MAX] = {0};
  // Auxiliar (numerador)
  float aux;
  // Índices
  int l, c;

  // leitura de n
  do {
    printf("Entre o tamanho (n) do "
	   "sistema (n <= %d): ", MAX);
    scanf("%d", &n);
  } while (n > 0 && n > MAX);



  // Leitura dos dados de entrada
  for (l = 0; l < n; l++) {
    for (c = l; c < n; c++) {
      printf("Coeficiente a(%d,%d): ",
	     l+1, c+1);
      scanf("%f", &a[l][c]);
    }
    printf("Termo independente b(%d): ",
	   l+1);
    scanf("%f", &b[l]);
  }

  // Resolucao por retrossubstituicao
  for (l = n - 1; l >= 0; l--) {
    aux = b[l];
    for (c = l + 1; c < n; c++)
      aux = aux - a[l][c] * x[c];
    x[l] = aux / a[l][l];
  }

  // Impressao da solucao
  printf("O vetor solucao é: \n");
  for (l = 0; l < n; l++)
    printf("x_%d = %f\n", l+1, x[l]);
  return 0;
}
