#include <stdio.h>
#include <string.h>
#define TAMANHO 100
int main() {
  char origem[TAMANHO];
  int tamanho;
  printf("Forneça um nome de até %d caracteres: ", TAMANHO);
  fgets(origem, TAMANHO, stdin);
  tamanho = strlen(origem); // <- AQUI
  printf("->[%s]<- com %d caracteres (bytes)\n",
	 origem, tamanho);
  return 0;
}
