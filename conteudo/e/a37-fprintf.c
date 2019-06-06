#include <stdio.h>
#define MIN 345  // número mínimo para geração aleatório de valor inteiro
#define MAX 567  // número máximo para geração aleatório de valor inteiro
#define NUMEL 23 // número de elementos
int main() {
  int i, numero;
  FILE *arq;
  arq = fopen("meu_arquivo_texto.txt", "w");
  if (arq == NULL) {
    printf("Problema ao abrir o arquivo para escrita. Fatal.\n");
    return 0;
  }
  for (i = 0; i < NUMEL; i++){
    numero = MIN+(rand()%(MAX-MIN));
    fprintf(arq, "%d\n", numero);
  }
  fclose(arq);
  return 0;
}
