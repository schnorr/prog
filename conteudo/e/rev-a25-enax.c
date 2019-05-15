#include "rev-a25-enax.h"
#include "rev-a25-aux.h" //contém protótipos

float enax (float x) {
  float ret = 0;
  float termo = 0;
  int i = 0;
  do {
    ret += termo;
    termo = potencia(x, i) / fatorial(i);
    i++;
  }while (fabs(termo) > 0.0001);
  return ret;
}
