#include <stdio.h>
int main() {
  char meu_caractere = 'L';
  FILE *arq = fopen("meu_arquivo_texto.txt", "w");
  if (arq == NULL) {
    printf("Problema ao abrir o arquivo para escrita. Fatal.\n");
    return 0;
  }
  fputc(meu_caractere, arq);
  fputc('[', arq);
  //escrever uma string, caractere por caractere
  char str[] = "INF1202", *p = str;
  while(*p != '\0'){
    fputc(*p, arq);
    p++;
  }
  putc(']', arq);  //<- veja o uso do putc
  putc('\n', arq); //<- veja o uso do putc
  fclose(arq);
  return 0;
}
