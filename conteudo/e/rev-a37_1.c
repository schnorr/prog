#include <stdio.h>
int main() {
  // arquivo de entrada e saída
  FILE *arquivo_entrada = NULL;
  FILE *arquivo_saida = NULL;
  // variável auxiliar
  char c;
  arquivo_entrada = fopen("entrada.txt", "r");
  arquivo_saida = fopen("saida.txt", "w");
  if (!arquivo_entrada || !arquivo_saida){
    printf("Erro na abertura dos arquivos de entrada e saída.\n");
  }else{
    while ((c = fgetc(arquivo_entrada)) != EOF) {
      fputc(c, arquivo_saida);
    }
    fclose(arquivo_entrada);
    arquivo_entrada = NULL;
    fclose(arquivo_saida);
    arquivo_saida = NULL;
  }
  return 0;
}
