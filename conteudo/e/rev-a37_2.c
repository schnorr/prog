#include <stdio.h>
#define TAMANHO_DA_LINHA 80
int main() {
  FILE *arquivo = NULL;
  char linha[TAMANHO_DA_LINHA];
  arquivo = fopen("saida.txt", "a");
  fseek(arquivo, -1, SEEK_END);
  if (arquivo == NULL){
    printf("Erro na abertura do arquivo.\n");
  }else{
    printf("Entre com a linha a ser incluída no final: ");
    fgets(linha, TAMANHO_DA_LINHA, stdin);
    fputs(linha, arquivo);
    fclose(arquivo);
    arquivo = NULL;
  }
  return 0;
}
