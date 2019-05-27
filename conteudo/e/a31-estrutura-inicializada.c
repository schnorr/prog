#include <stdio.h>

struct funcionario {
  int codigo;
  char nome[30];
  char cargo[40];
  int depto;
  float salario;
};

int main() {
  struct funcionario func1 = {2314, "Lucas", "Professor",  42, 123.45};
  struct funcionario func2 = {2315, "Alpha", "Professora", 43, 123.46};
  return 0;
}
