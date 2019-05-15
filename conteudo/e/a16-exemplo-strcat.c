#include <stdio.h>
#include <string.h>
#define TAMANHO 10
int main() {
  char origem[TAMANHO];
  char destino[2*TAMANHO];
  printf("Forneça um nome de até %d caracteres: ", TAMANHO);
  fgets(origem, TAMANHO, stdin);
  printf("Forneça outro nome de até %d caracteres: ", TAMANHO);
  fgets(destino, TAMANHO, stdin);
  strcat(destino, origem); // <- AQUI
  printf("destino ->[%s]<-\n", destino);
  return 0;
}
