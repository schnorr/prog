#include <stdio.h>
#define NFUNCS 2
struct funcionario {
  int codigo;
  float salario;
};

void imprime_funcionario (struct funcionario f) {
  printf("Cód.:%d\n\tSal.:%f\n", f.codigo, f.salario);
  return;
}

int main() {
  struct funcionario fs[NFUNCS] = { {2, 3.4}, {4, 5.6} };
  int i;
  for (i = 0; i < NFUNCS; i++){
    imprime_funcionario(fs[i]);
  }
  return 0;
}
