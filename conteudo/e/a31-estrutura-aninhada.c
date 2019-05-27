#include <stdio.h>
struct endereco {
  char rua[50];
  int numero;
  char cidade[30];
  char estado[3];
};

struct funcionario {
  int codigo;
  char nome[30];
  struct endereco local;
};

int main() {
  struct funcionario f1 = {2315, "Alpha", {"Bento", 9500, "Poa", "RS"} };
  struct funcionario f2;
  f2 = f1; // <-- veja aqui a atribuição
  printf("Código: %d\nNome: %s\n", f2.codigo, f2.nome);
  printf("Endereço: %s, %d - %s, %s\n",
	 f2.local.rua, f2.local.numero, f2.local.cidade, f2.local.estado);
  return 0;
}
