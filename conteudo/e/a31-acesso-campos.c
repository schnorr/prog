#include <stdio.h>

struct funcionario {
  int codigo;
  char nome[30];
  char cargo[40];
  int depto;
  float salario;
};

int main() {
  struct funcionario f = {2315, "Alpha", "Professora", 43, 123.46};
  f.codigo = 2317;  //vamos alterar o código
  printf("Código: %d\nNome: %s\nCargo: [%s]\nDepartamento: %d\nSalário: %f\n",
	 f.codigo, f.nome, f.cargo, f.depto, f.salario);
  return 0;
}
