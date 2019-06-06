#include <stdio.h>
#define NUMEL 23 // número de elementos
int main() {
  int i, numero;
  FILE *arq;
  arq = fopen("meu_arquivo_texto.txt", "r");
  if (arq == NULL) {
    printf("Problema ao abrir o arquivo para escrita. Fatal.\n");
    return 0;
  }
  for (i = 0; i < NUMEL; i++){
    fscanf(arq, "%d", &numero);
    printf("%d\n", numero);
  }
  fclose(arq);
  return 0;
}
