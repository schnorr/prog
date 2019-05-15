/* Programa para satisfazer o enunciado sobre a taxa de crescimento com while */
#include <stdio.h>
int main() {
  int qtdadeAnos;
  double popBRA, popEUA;
  double taxaBRA, taxaEUA;

  popBRA = 203.0;
  popEUA = 318.0;
  taxaBRA = 1.5 / 100;
  taxaEUA = 1.3 / 100;

  qtdadeAnos = 0;

  while (popBRA < popEUA) {
    popBRA += popBRA * taxaBRA;
    popEUA += popEUA * taxaEUA;
    taxaEUA = taxaEUA - 0.1 / 100;
    if (taxaEUA < 0) taxaEUA = 0;
    qtdadeAnos += 1;
  }
  printf("Anos: %d\n", qtdadeAnos);
  return 0;
}
