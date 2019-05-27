#include<stdio.h>
int *procura_valor (int *v, int tamanho, int valor) {
  int i;
  for (i = 0; i < tamanho; i++){
    if (*(v + i) == valor)
      return v+i;
  }
  return NULL;
}
