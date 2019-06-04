#include "GeraSalva.h"
atleta_t atletas[NATLETAS] = {0};
int main() {
  int i, natletas = 0;
  FILE *arquivo = fopen(FATLETAS, "r");
  if (arquivo) {
    fread(&natletas, sizeof(int), 1, arquivo);
    fread(&atletas, sizeof(atleta_t), natletas, arquivo);
    fclose(arquivo);
  }else{
    printf("Impossível de abrir arquivo [%s] para leitura. Fatal.\n", FATLETAS);
  }

  for (i = 0; i < natletas; i++){
    atleta_t *a = &atletas[i];
    printf("%s, %d, %d\n", a->nome, a->idade, a->altura);
  }
  printf("Foram impressos %d atletas.\n", natletas);
  return 0;
}
