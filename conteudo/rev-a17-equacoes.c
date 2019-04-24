/* Programa que resolve um sistema linear triangular superior
Entradas: elementos da matriz triangular inferior e termos
independentes do sistema. Saídas: as incógnitas do sistema linear. */
#include <stdio.h>
#define MAX 5
int main () {
  int n; // Entrada: a quantidade de incógnitas
  float a[MAX][MAX] = {0}; // matriz dos coeficients
  float b[MAX] = {0}; // vetor dos termos independentes
  float x[MAX] = {0}; // vetor solucao
  float aux; // variável auxiliar
  int l, c; // índices da linha e da coluna da matriz

  // leitura do tamanho do sistema
  // (deve ser menor ou igual a MAX)
  n = 0;
  do {
    printf("Entre o tamanho (n) do sistema (n <= %d): ", MAX);
    scanf("%d", &n);
  } while (n > 0 && n > MAX);

  // Leitura dos dados de entrada
  for (l = 0; l < n; l++) {
    for (c = l; c < n; c++) {
      printf("Entre o valor do coeficiente a(%d,%d):", l+1, c+1);
      scanf("%f", &a[l][c]);
    }
    printf("Entre o valor do termo independente b(%d):", l+1);
    scanf("%f", &b[l]);
  }

  // Resolucao por retrossubstituicao
  for (l = n - 1; l >= 0; l--) {
    temp = b[l];
    for (c = l + 1; c < n; c++) {
      temp = temp - a[l][c] * x[c];
    }
    x[l] = temp / a[l][l];
  }

  // Impressao da solucao
  printf("O vetor solucao é: ");
  for (l = 0; l < n; l++) {
    printf("%f\n", x[l]);
  }
  return 0;
}
