#include "GeraSalva.h"
atleta_t atletas[NATLETAS] = {0};
int main() {
  int i, natletas = NATLETAS;
  for (i = 0; i < natletas; i++){
    atleta_t *a = &atletas[i];
    gera_nome_aleatorio(a->nome, 32);
    a->idade = gera_idade_aleatoria(15, 35);
    a->altura = gera_altura_aleatoria(155, 190);
  }
  FILE *arquivo = fopen(FATLETAS, "w");
  if (arquivo) {
    fwrite(&natletas, sizeof(int), 1, arquivo);
    fwrite(&atletas, sizeof(atleta_t), natletas, arquivo);
    fclose(arquivo);
  }else{
    printf("Impossível de abrir arquivo [%s]. Fatal.\n", FATLETAS);
  }
  return 0;
}
