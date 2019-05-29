#include <stdio.h>

typedef struct funcionario {
  int codigo;
  char nome[30];
  char cargo[15];
  int depto;
  float salario;
} funcionario_t;

int main() {
  funcionario_t f1 = {2315, "Alpha", "Professora", 43, 123.46};
  funcionario_t f2;
  f2 = f1; // <-- veja aqui a atribuição
  printf("Código: %d\nNome: %s\nCargo: [%s]\nDepartamento: %d\nSalário: %f\n",
	 f2.codigo, f2.nome, f2.cargo, f2.depto, f2.salario);
  return 0;
}
