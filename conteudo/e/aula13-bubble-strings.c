#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 10
#define NLINHAS 4
int main() {
  char nomes[NLINHAS][TAMANHO] = { "Lucas", "Theo", "Alba", "Elisa" };
  char aux[TAMANHO] = {0};
  int sinal; // sinal de troca do algoritmo
  int linha; // índica da linha
  // Ordenação por Bolha
  do {
    sinal = 0;
    for (linha = 0; linha < NLINHAS-1; linha++)
      if (strcmp(nomes[linha], nomes[linha+1]) > 0) {
	  strncpy(aux,            nomes[linha],   TAMANHO);
	  strncpy(nomes[linha],   nomes[linha+1], TAMANHO);
	  strncpy(nomes[linha+1], aux,            TAMANHO);
	  sinal = 1;
      }
  } while (sinal == 1);
  // Imprimir o resultado do ordenamento
  for (linha = 0; linha < NLINHAS; linha++){
    printf("%d [%s]\n", linha, nomes[linha]);
  }
  return 0;
}
