#include <stdio.h>

struct funcionario {
  int codigo;
  char nome[30];
  char cargo[40];
  int depto;
  float salario;
};

int main() {
  struct funcionario f1 = {2315, "Alpha", "Professora", 43, 123.46};
  struct funcionario f2;
  f2 = f1; // <-- veja aqui a atribuição
  printf("Código: %d\nNome: %s\nCargo: [%s]\nDepartamento: %d\nSalário: %f\n",
	 f2.codigo, f2.nome, f2.cargo, f2.depto, f2.salario);
  return 0;
}
