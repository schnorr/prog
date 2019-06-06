#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXNUMEL 10
void ConvertePontuacao(FILE *fp, double vet[]);
int main() {
  FILE *arq = NULL;
  int i = 0;
  double ptos[MAXNUMEL]; // vetor de pontos e índice
  arq = fopen("entrada.txt", "r");
  if (arq == NULL){
    printf("Erro ao abrir arquivo!\n");
    return 0;
  }
  ConvertePontuacao (arq, ptos);
  fclose(arq);
  printf("Vetor resultante da conversao:\n");
  double somatorio = 0;
  while (ptos[i] != -1){
    printf(" %f ",ptos[i]);
    somatorio += ptos[i];
    i++;
  }
  printf("\nSomatorio: %f\n", somatorio);
  return 0;
}

void ConvertePontuacao (FILE *fp, double vet[]) {
  char stringao[256], *pch; // armazena linha lida
  int i_vet=0;
  if (fgets (stringao, sizeof(stringao), fp) == NULL)
    printf("\n Não leu nada!");
  else{
    pch = strtok(stringao,"*");
    vet[i_vet] = atof(pch);
    while (pch != NULL){
      i_vet++;
      pch = strtok(NULL,"*");
      if (pch!= NULL) vet[i_vet] = atof(pch);
    }
    vet[i_vet] = -1; // sinalizador de fim de valores convertidos
  }
} // fim da função
