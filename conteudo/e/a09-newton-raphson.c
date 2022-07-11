/* Programa para calcular raiz quadrada de 2 usando Newton-Raphson
Entrada: numero de iteracoes (inteiro) e “chute” inicial
Saida: valor aproximado de raiz de 2*/
#include <stdio.h>
#include <math.h>
#include <float.h>
int main() {
  double x0, xn; // aproximacao inicial e valores usados na iteracao
  double dif, tol; //diferença
  printf("Entre o erro tolerado:\n");
  scanf("%lf", &tol);
  printf("Entre a aproximacao inicial de raiz de 2:\n");
  scanf("%lf", &x0);

  dif = DBL_MAX;
  while(dif > tol) {
    xn = x0 - (x0*x0-2)/(2*x0);
    dif = fabs(x0 - xn);
    printf("%f valor aproximado é %1.15f\n", dif, xn);
    x0 = xn;
  }
  printf("sqrt(2)         : %1.15f\n"
         "Valor aproximado: %1.15f\n", sqrt(2), xn);
  return 0;
}
