#include "Index.h"
#include "GeraSalva.h"
int main() {
  atleta_t atleta = {0};
  index_t index = {0};
  char procurado[32] = {0};
  int nova_idade = 0;
  // 1. Abre o arquivo dos atletas para atualização
  FILE *arq0 = fopen(FATLETAS, "r+");
  if (!arq0) {
    printf("Impossível de abrir arquivo [%s] "
	   "para atualização. Fatal.\n", FATLETAS);
    return 0;
  }
  // 1. Abre o arquivo dos índices para leitura
  FILE *arq1 = fopen(FINDEX, "r");
  if (!arq1) {
    printf("Impossível de abrir arquivo [%s] "
	   "para leitura. Fatal.\n", FINDEX);
    return 0;
  }
  // 2. Le o procurado e sua idade corrigida
  printf("Nome do procurado: ");
  fgets(procurado, 32, stdin);
  procurado[strlen(procurado)-1] = '\0';
  printf("Nova idade do procurado [%s]: ", procurado);
  scanf("%d", &nova_idade);
  printf("Atualizar [%s] com a idade [%d]!\n",
	 procurado, nova_idade);

  // 3, 4. Enquanto o arquivo não chegar ao fim
  int encontrei = 0;
  while(!feof(arq1) && encontrei == 0){
    // Le os dados de um index_t
    fread(&index, sizeof(index_t), 1, arq1);
    if (strcmp(index.nome, procurado) == 0){
      encontrei = 1;
    }
  }
  fclose(arq1);
  if (encontrei == 0){
    printf("Nome não encontrado no índice. Fatal.\n");
    return 0;
  }
  // 5. Vamos posiciar a cabeça de leitura
  fseek(arq0, index.posicao, SEEK_SET);
  // 6. Ler
  fread(&atleta, sizeof(atleta_t), 1, arq0);
  // 7. Confirmar que é bem o atleta que estamos procurando
  if (strcmp(atleta.nome, index.nome) != 0){
    printf("Erro, o indice está corrompido.\n");
    return 0;
  }
  // 8. Atualizar a idade (em memória)
  atleta.idade = nova_idade;
  // 9. Reposicionar na posição correta
  fseek(arq0, index.posicao, SEEK_SET);
  // 10. Escrever
  fwrite(&atleta, sizeof(atleta_t), 1, arq0);
  fclose(arq0);
  return 0;
}
