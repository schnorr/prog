#include <stdio.h>
#define NATLETAS 3
#define TAMANHO
int main() {
  char *nomes[TAMANHO] = {"Solar", "Alpha", "Centauri"};
  int idades[NATLETAS] = {32, 45, 43};
  int alturas[NATLETAS] = {155, 162, 175};

  FILE *arq = fopen("registros.csv", "w");
  if (arq == NULL) {
    printf("Problema ao abrir o arquivo para escrita. Fatal.\n");
    return 0;
  }
  fputs("Nome,Idade,Altura\n", arq);
  for (int i = 0; i < NATLETAS; i++){
    fprintf(arq, "%s,%d,%d\n", nomes[i], idades[i], alturas[i]);
  }
  fclose(arq);
  return 0;
}
