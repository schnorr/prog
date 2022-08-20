#define TAM 6
void ordena_pela_bolha (int *v, int tamanho) {
  int i, sinal, aux, fim;
  fim = tamanho - 1;
  do {
    sinal = 0;
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
