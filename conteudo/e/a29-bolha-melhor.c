#include <stdio.h>






#define TAM 6
void ordena_pela_bolha (int *v, int tamanho) {
  int i, sinal, aux, fim;
  do {
    sinal = 0;
    fim = tamanho - 1;
    for (i = 0; i < fim; i++)
      if (v[i] > v[i+1]) {
	aux = v[i];
	v[i] = v[i+1];
	v[i+1] = aux;
	sinal = 1;
      }
    fim--;
  } while (sinal == 1);
}

int main() {
int vetor[TAM] = {5, 3, 4, 1, 9, 8};
ordena_pela_bolha(vetor, TAM);
for(int i = 0; i < TAM; i++)
  printf("%d ", *(vetor+i));
return 0;
}
