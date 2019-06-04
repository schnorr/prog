#include <stdio.h>
#include "GeraSalva-Nomes.h"
#include "GeraSalva.h"
int main() {
  atleta_t um_atleta;
  gera_nome_aleatorio(um_atleta.nome, 20);
  um_atleta.idade = gera_idade_aleatoria(18, 25);
  um_atleta.altura = gera_altura_aleatoria(180, 185);

  FILE *arquivo = fopen(FATLETAS, "a");
  if (arquivo){
    fwrite(&um_atleta, sizeof(atleta_t), 1, arquivo);
    fclose(arquivo);
  }else{
    printf("Impossível abrir arquivo [%s] para concatenar. Fatal.\n", FATLETAS);
  }
  return 0;
}
