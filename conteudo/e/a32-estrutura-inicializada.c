#include <stdio.h>

typedef struct funcionario {
  int codigo;
  char nome[30];
  char cargo[10];
  int depto;
  float salario;
} funcionario_t;

int main() {
  funcionario_t func1 = {2314, "Lucas", "Professor",  42, 123.45};
  funcionario_t func2 = {2315, "Alpha", "Professora", 43, 123.46};
  return 0;
}
