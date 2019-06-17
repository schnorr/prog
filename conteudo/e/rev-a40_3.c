#include <stdio.h>
#define TAM 13
int busca(int vetor[], int inicio, int fim, int valor_buscado) {
  printf("%d: %d %d\n", valor_buscado, inicio, fim);
  int largura = fim - inicio;
  int posicao = inicio + (largura)/2;
  if (vetor[posicao] == valor_buscado) return 1;
  else if (vetor[posicao] != valor_buscado && largura == 1) return 0;
  else if (vetor[posicao] < valor_buscado) return busca(vetor, posicao, fim, valor_buscado);
  else if (vetor[posicao] > valor_buscado) return busca(vetor, inicio, posicao, valor_buscado);
  else return 0;
}
int main(){
  int vet[TAM] = {1, 3, 6, 8, 10, 11, 14, 17, 19, 31, 34, 65, 93};
  printf("%d\n", busca(vet, 0, TAM-1, 34));
  printf("%d\n", busca(vet, 0, TAM-1, 35));
  return 0;
}
