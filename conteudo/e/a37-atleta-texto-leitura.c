#include <stdio.h>
#define TAMANHO 32
int main() {
  char nome[TAMANHO];
  int idade;
  int altura;
  FILE *arq = fopen("registros.csv", "r");
  if (arq == NULL) {
    printf("Problema ao abrir o arquivo para leitura. Fatal.\n");
    return 0;
  }
  // Le o cabeçalho
  fgets(nome, TAMANHO, arq);
  while(feof(arq) == 0){
    int lidos = fscanf(arq, "%s,%d,%d", nome, &idade, &altura);
    printf("Dados %d lidos: [%s] [%d] [%d]\n", lidos, nome, idade, altura);
  }
  fclose(arq);
  return 0;
}
