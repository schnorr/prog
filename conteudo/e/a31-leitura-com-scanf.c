#include <stdio.h>

struct funcionario {
  int codigo;
  char nome[30];
  char cargo[40];
  int depto;
  float salario;
};

int main() {
  struct funcionario f;
  scanf("%d", &f.codigo);
  fgets(f.nome, 30, stdin);
  fgets(f.cargo, 40, stdin);
  scanf("%d", &f.depto);
  scanf("%f", &f.salario);
  return 0;
}
