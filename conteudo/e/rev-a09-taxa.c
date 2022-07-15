/* Programa para satisfazer o enunciado sobre a taxa de crescimento com while */
#include <stdio.h>
int main() {
  int qtdadeAnos;
  double popBRA, popEUA;
  double taxaBRA, taxaEUA;

  popBRA = 214.0;
  popEUA = 332.0;
  taxaBRA = 1.34 / 100;
  taxaEUA = 1.09 / 100;

  qtdadeAnos = 0;

  while (popBRA < popEUA) {
    popBRA += popBRA * taxaBRA;
    popEUA += popEUA * taxaEUA;
    printf("%lf %lf\n", popBRA, popEUA);
    taxaEUA = taxaEUA - 0.1 / 100;
    if (taxaEUA < 0) taxaEUA = 0;
    qtdadeAnos += 1;
  }
  printf("Anos: %d\n", qtdadeAnos);
  return 0;
}
