#include <stdio.h>
#include "GeraSalva-Nomes.h"
#include "GeraSalva.h"
int main() {
  FILE *arquivo = NULL;
  int natletas = 0;
  atleta_t atleta = {0};
  gera_nome_aleatorio(atleta.nome, 20);
  atleta.idade = gera_idade_aleatoria(18, 25);
  atleta.altura = gera_altura_aleatoria(180, 185);
  printf("%s, %d, %d\n",
	 atleta.nome, atleta.idade, atleta.altura);

  //1. 
  arquivo = fopen(FATLETAS, "r+");
  if (arquivo){
    fread(&natletas, sizeof(int), 1, arquivo);
  }else{
    printf("Impossível abrir arquivo "
	   "[%s] para leitura/escrita. "
	   "Fatal.\n", FATLETAS);
    return 0;
  }

  //2.
  fseek(arquivo, 0L, SEEK_END);

  //3.
  fwrite(&atleta, sizeof(atleta_t), 1, arquivo);
  fflush(arquivo);

  //4.
  rewind(arquivo);
  natletas++;
  fwrite(&natletas, sizeof(int), 1, arquivo);
  fclose(arquivo);
  return 0;
}
