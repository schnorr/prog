/* Programa para satisfazer o enunciado sobre a taxa de crescimento */
#include <stdio.h>
int main() {
  int ano;
  double popBRA, popEUA;
  double taxaBRA, taxaEUA;

  popBRA = 214.0;
  popEUA = 332.0;
  taxaBRA = 1.34 / 100;
  taxaEUA = 1.09 / 100;

  for (ano = 0; popBRA < popEUA; ano++){
    popBRA += popBRA * taxaBRA;
    popEUA += popEUA * taxaEUA;
    taxaEUA = taxaEUA - 0.1 / 100;
    if (taxaEUA < 0) taxaEUA = 0;
  }
  printf("Anos: %d\n", ano);
  return 0;
}
