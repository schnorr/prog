#include <stdio.h>
#define NFUNCS 2
struct funcionario {
  int codigo;
  float salario;
};
struct funcionario le_funcionario (void) {
  struct funcionario ret = {0};
  printf("Forneça código e salário: ");
  scanf("%d%f", &ret.codigo, &ret.salario);
  return ret;
}
int main() {
  struct funcionario fs[NFUNCS] = {0};
  int i;
  for (i = 0; i < NFUNCS; i++){
    fs[i] = le_funcionario();
    printf("Lido %d:\n\tCód.:%d\n\tSal.:%f\n", i, fs[i].codigo, fs[i].salario);
  }
  return 0;
}
