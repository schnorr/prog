#include <stdio.h>
int main() {
  char str[] = "Oi Mundo, veja como eu sei criar arquivos texto.";
  FILE *arq;
  arq = fopen("meu_arquivo_texto.txt", "w");
  if (arq == NULL) {
    printf("Problema ao abrir o arquivo para escrita. Fatal.\n");
    return 0;
  }
  fputs(str, arq);
  fputs("\n", arq);
  fputs("Outra string na segunda linha.", arq);
  fclose(arq);
  return 0;
}

#include <stdio.h>
#define TAMANHO 30
int main() {
  char str[TAMANHO] = {0};
  FILE *arq;
  arq = fopen("meu_arquivo_texto.txt", "r");
  if (arq == NULL) {
    printf("Problema ao abrir o arquivo para escrita. Fatal.\n");
    return 0;
  }
  fgets(str, TAMANHO, arq);
  printf("[%s]\n", str);
  fclose(arq);
  return 0;
}
