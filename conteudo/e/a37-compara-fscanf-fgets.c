#include <stdio.h>
#define NUMCHAR 256
int main(){
  char buffer[NUMCHAR] = {0};
  FILE *arq = fopen("Teste.txt","r");
  if (arq == NULL) {
    printf("Erro na abertura\n");
    return 0;
  }
  printf("Imprimindo conteudo do arquivo com fscanf\n");
  while(!feof(arq)){
    if (fscanf(arq,"%s",buffer) != -1)
      printf("[%s]",buffer);
  }
  rewind(arq);
  printf("\n\nImprimindo conteudo do arquivo com fgets\n");
  while(!feof(arq)){
    if (fgets(buffer,256, arq) != NULL)
      printf("[%s]",buffer);
  }
  fclose(arq);
  return 0;
}
