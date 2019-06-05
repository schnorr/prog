#include "Index.h"
int main() {
  atleta_t atleta;
  index_t index;

  // Abre o arquivo dos atletas para leitura
  FILE *arq0 = fopen(FATLETAS, "r");
  if (!arq0) {
    printf("Impossível de abrir arquivo [%s] "
	   "para leitura. Fatal.\n", FATLETAS);
    return 0;
  }

  // Abre o arquivo dos índices para escrita
  FILE *arq1 = fopen(FINDEX, "w");
  if (!arq1) {
    printf("Impossível de abrir arquivo [%s] "
	   "para escrita. Fatal.\n", FINDEX);
    return 0;
  }






  // Ignora os 4 bytes iniciais com fseek
  fseek(arq0, sizeof(int), SEEK_CUR);

  // Enquanto o arquivo não chegar ao fim
  while(!feof(arq0)){
    // Salva a posição
    long posicao = ftell(arq0);

    // Le os dados de um atleta
    fread(&atleta, sizeof(atleta_t), 1, arq0);

    // Cria o índice correspondente
    index = cria_index(&atleta, posicao);

    // Escreve o índice no arquivo de saída
    fwrite(&index, sizeof(index_t), 1, arq1);
  }
  fclose(arq0);
  fclose(arq1);
  return 0;
}
