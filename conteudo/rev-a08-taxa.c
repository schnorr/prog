/* Programa para satisfazer o enunciado sobre a taxa de crescimento */
#include <stdio.h>
int main() {
  int ano;   // Entrada: numero de iteracoes
  double popBRA, popEUA;
  double taxaBRA, taxaEUA;

  popBRA = 203.0;
  popEUA = 318.0;
  taxaBRA = 1.5 / 100;
  taxaEUA = 1.3 / 100;

  for (ano = 0; popBRA < popEUA; ano++){
    popBRA += popBRA * taxaBRA;
    popEUA += popEUA * taxaEUA;
    taxaEUA = taxaEUA - 0.1 / 100;
    if (taxaEUA < 0) taxaEUA = 0;
  }
  printf("Anos: %d\n", ano);
  return 0;
}
