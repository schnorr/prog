#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 10
#define NLINHAS 4
int main() {
  char n[NLINHAS][TAMANHO] =
    { "Lucas",
      "Theo",
      "Alba",
      "Elisa" };
  char aux[TAMANHO] = {0};
  int sinal; // sinal de troca
  int i; // índica da linha




  // Ordenação por Bolha
  do {
    sinal = 0;
    for (i = 0; i < NLINHAS-1; i++)
      if (strcmp(n[i], n[i+1]) > 0) {
	  strcpy(aux, n[i]);
	  strcpy(n[i], n[i+1]);
	  strcpy(n[i+1], aux);
	  sinal = 1;
      }
  } while (sinal == 1);


  // Imprimir o resultado do ordenamento
  for (i = 0; i < NLINHAS; i++){
    printf("%d [%s]\n", i, n[i]);
  }
  return 0;
}
