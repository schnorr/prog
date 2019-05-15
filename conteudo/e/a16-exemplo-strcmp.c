/* Programa que le um par de string, comparando cada par */
#include <stdio.h>
#include <string.h>
#define TAMANHO 40
int main() {
  char string_primeiro[TAMANHO];
  char string_segundo[TAMANHO];
  printf("Forneca um texto: ");
  fgets(string_primeiro, TAMANHO, stdin);
  printf("Forneca um texto: ");
  fgets(string_segundo, TAMANHO, stdin);
  printf("Resultado da comparacao de %s com %s: %d\n\n",
	 string_primeiro, string_segundo,
	 strcmp(string_primeiro, string_segundo) );
  return 0;
}
