/* Programa para calcular raiz quadrada de 2 usando Newton-Raphson
Entrada: numero de iteracoes (inteiro) e “chute” inicial
Saida: valor aproximado de raiz de 2*/
#include <stdio.h>
#include <math.h>
int main() {
  double xinic, x1, x2; // aproximacao inicial e valores usados na iteracao
  double dif, tol; //diferença
  printf("Entre o erro tolerado:\n");
  scanf("%lf", &tol);
  printf("Entre a aproximacao inicial de raiz de 2:\n");
  scanf("%lf", &xinic);
  x1 = xinic;
  //dif = DBL_MAX; //não é mais necessário
  do {
    x2 = x1 - (x1*x1-2)/(2*x1);
    dif = fabs(x1 - x2);
    printf("%f valor aproximado é %1.15f\n", dif, x2);
    x1 = x2;
  } while(dif > tol);
  printf("sqrt(2)         : %1.15f\n"
         "Valor aproximado: %1.15f\n", sqrt(2), x2);
  return 0;
}
