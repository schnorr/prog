#include <stdio.h>
#include <string.h>
#define TAMANHO 10
int main() {
  char origem[TAMANHO];
  char destino[TAMANHO];
  printf("Forneça um nome de até %d caracteres: ", TAMANHO);
  fgets(origem, TAMANHO, stdin);
  strcpy(destino, origem); // <- AQUI
  printf("destino ->[%s]<-\n", destino);
  return 0;
}
