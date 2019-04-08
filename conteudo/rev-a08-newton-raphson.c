/* Programa para calcular raiz quadrada de 2 usando Newton-Raphson
Entrada: numero de iteracoes (inteiro) e “chute” inicial
Saida: valor aproximado de raiz de 2*/
#include <stdio.h>
#include <math.h>
#include <float.h>
int main() {
  int niter; // Entrada: numero de iteracoes
  int i;     // Variável auxiliar para contar as iterações
  double xinic, x1, x2; // aproximacao inicial e valores usados na iteracao
  double dif, tol; //diferença
  printf("Entre o numero máximo de iteracoes:\n");
  scanf("%d", &niter);
  printf("Entre o erro tolerado:\n");
  scanf("%lf", &tol);
  printf("Entre a aproximacao inicial de raiz de 2:\n");
  scanf("%lf", &xinic);

  x1 = xinic;
  dif = DBL_MAX;
  for (i = 0; i < niter && dif > tol; i++) {
    x2 = x1 - (x1*x1-2)/(2*x1);
    dif = fabs(x1 - x2);
    printf("Iteração %d, %f valor aproximado é %1.15f\n", i, dif, x2);
    x1 = x2;
  }
  printf("sqrt(2)         : %1.15f\n"
         "Valor aproximado: %1.15f\n", sqrt(2), x2);
  return 0;
}
