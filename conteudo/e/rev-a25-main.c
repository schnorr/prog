#include <stdio.h>
#include "rev-a25-enax.h" //contém protótipo da função enax

int main() {
  float x, resposta;
  printf("Por favor, valor de x: ");
  scanf("%f", &x);
  resposta = enax(x); //chamada de função
  printf("O valor de e elevado na %f é: %f\n", x, resposta);
  return 0;
}
