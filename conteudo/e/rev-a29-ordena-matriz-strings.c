/* Exemplo de função que ordena em ordem crescente um array de strings */
#include <stdio.h>
#include <string.h>
#define MAXLIN 5
#define MAXCOL 40
void ClassificaBolhaStrings (char nomes[][MAXCOL], int nlin) {
  char aux[MAXCOL]; //string temporario para trocas de linhas
  int ind, fim, sinal;
  fim = nlin - 1; //indica até onde o array ainda não está ordenado
  do {
    sinal = 0; // indica se houve alguma troca nesta passagem
    for (ind = 0; ind < fim; ind++)
      if (strcmp(nomes[ind], nomes[ind + 1]) > 0) { //compara duas strings
	strcpy(aux, nomes[ind]);
	strcpy(nomes[ind], nomes[ind + 1]);
	strcpy(nomes[ind + 1], aux);
	sinal = 1;
      }
    fim--;
  } while (sinal == 1 && fim > 0); // para quando não houver troca de posicoes
  return;
}

/* Exemplo de função que ordena em ordem crescente um array de strings */
int main() {
  char matriz[MAXLIN][MAXCOL];
  int ind;
  fflush(stdin);
  for (ind = 0; ind < MAXLIN; ind++) {
    printf("Entre o nome da pessoa %d:", ind + 1);
    fgets(matriz[ind], MAXCOL, stdin);
    matriz[ind][strlen(matriz[ind])-1] = '\0';
  }
  ClassificaBolhaStrings(matriz, MAXLIN);
  printf("Array de strings ordenado:\n");
  for (ind = 0; ind < MAXLIN; ind++) {
    printf("%s\n", matriz[ind]);
  }
  return 0;
}
