#define TAM 6
void ordena_pela_bolha (int *v, int tamanho) {
  int i, sinal, aux;
  do {
    sinal = 0;
    for (i = 0; i < tamanho-1; i++)
      if (v[i] > v[i+1]) {
	aux = v[i];
	v[i] = v[i+1];
	v[i+1] = aux;
	sinal = 1;
      }
  } while (sinal == 1);
}

int vetor[TAM] = {5, 3, 4, 1, 9, 8};
ordena_pela_bolha(vetor, TAM);
for(int i = 0; i < TAM; i++)
  printf("%d ", *(vetor+i));
