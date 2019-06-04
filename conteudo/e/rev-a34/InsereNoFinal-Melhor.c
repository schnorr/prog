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

  //1. 
  arquivo = fopen(FATLETAS, "r");
  if (arquivo){
    fread(&natletas, sizeof(int), 1, arquivo);
    fclose(arquivo);
  }else{
    printf("Impossível abrir arquivo "
	   "[%s] para leitura. Fatal.\n", FATLETAS);
    return 0;
  }




  //2. 
  arquivo = fopen(FATLETAS, "a");
  if (arquivo){
    fwrite(&atleta, sizeof(atleta_t), 1, arquivo);
    fclose(arquivo);
  }else{
    printf("Impossível abrir arquivo [%s] para concatenar. Fatal.\n", FATLETAS);
    return 0;
  }


  //3. 
  natletas++;
  arquivo = fopen(FATLETAS, "r+");
  fwrite(&natletas, sizeof(int), 1, arquivo);
  fclose(arquivo);
  return 0;
}
