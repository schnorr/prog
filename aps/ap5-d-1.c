#include <limits.h>
#include <stdio.h>
#include <math.h>

int main () {
  // Entradas
  double x;
  double r;
  double tolerancia;
  int n;
  // Auxiliares
  double diff;
  double novox;
  int i;
  printf("Entre o numero do qual se quer extrair a raiz quadrada: ");
  scanf("%lf", &r);
  printf("Entre a aproximacao inicial: ");
  scanf("%lf", &x);
  printf("Entre o numero maximo de iteracoes: ");
  scanf("%d", &n);
  printf("Entre a tolerancia: ");
  scanf("%lf", &tolerancia);

  i = 0;
  diff = INT_MAX;
  while (fabs(diff) > tolerancia && i < n){
    novox = x - ((pow(x, 4) - r) / (4 * pow(x, 3)));
    diff = novox - x;
    x = novox;
    i++;
  }
  printf("A raiz quarta aproximada eh %.15f, obtida com %d iteracoes.\n", x, i);
  printf("A raiz por math.h eh %.15f.\n", pow(r, 0.25));
  return 0;
}
