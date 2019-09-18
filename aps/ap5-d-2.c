#include <stdio.h>
#include <math.h>

#define TAMMAX 15

int main() {
  //Entradas
  int vetor1[TAMMAX];
  int vetor2[TAMMAX];
  int n;
  int m;
  //Auxiliares
  int i, j;
  int maior_diff;
  do {
    printf("Entre o numero de elementos no arranjo (valor menor ou igual a %d): ", TAMMAX);
    scanf("%d", &n);
  }while(n > TAMMAX);
  printf("Entre os %d valores inteiros: ", n);
  for (i = 0; i < n; i++){
    scanf("%d", &vetor1[i]);
  }
  do {
    printf("Entre um valor M menor do que %d: ", n);
    scanf("%d", &m);
  } while (m > n);

  for(j = 0, i = m; i < n; j++, i++){
    vetor2[j] = vetor1[i];
  }
  for(i = 0; j < n; j++, i++){
    vetor2[j] = vetor1[i];
  }

  printf("O arranjo modificado eh ");
  for(i = 0; i < n; i++){
    printf("%d ", vetor2[i]);
  }
  printf("\n");
  maior_diff = 0;
  for (i = 0; i < n; i++){
    if (fabs(vetor2[i] - vetor1[i]) > maior_diff) {
      maior_diff = fabs(vetor2[i] - vetor1[i]);
    }
  }
  printf("A maior diferenca (em modulo) entre os vetores eh %d.\n", maior_diff);
  return 0;
}
