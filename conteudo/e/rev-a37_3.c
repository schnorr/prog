#include <stdio.h>
int main() {
  FILE *arquivo = NULL;
  char c, o, d;
  arquivo = fopen("saida.txt", "r+");
  if (arquivo == NULL){
    printf("Erro na abertura do arquivo.\n");
  }else{
    printf("Qual o caractere de origem? ");
    scanf(" %c", &o);
    printf("Qual o caractere de destino? ");
    scanf(" %c", &d);
    printf("Okay, todos os \'%c\' serão substituídos por \'%c\' no arquivo.\n", o, d);
    while ((c = fgetc(arquivo)) != EOF) {
      if (c == o){
	    fseek(arquivo, -1, SEEK_CUR);
	    fputc(d, arquivo);
      }
    }
    fclose(arquivo);
    arquivo = NULL;
  }
  return 0;
}
