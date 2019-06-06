#include <stdio.h>
int main() {
  char c;
  FILE *arq = fopen("meu_arquivo_texto.txt", "r");
  if (arq == NULL) {
    printf("Problema ao abrir o arquivo para escrita. Fatal.\n");
    return 0;
  }
  while(feof(arq) == 0) {
    c = fgetc(arq);
    if (c == EOF){
      printf("Encontramos o EOF!!\n");
    }
    printf("[%c]", c);
  }
  fclose(arq);
  return 0;
}
