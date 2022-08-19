#include <stdio.h>
#define MAX 10
int imprime_vetor (int v[]) {
  int k;
  for (k=0; k<MAX; k++)
    printf("%3d ",v[k]);
  printf("\n");
  return 0;
}
int main() {
  int k, a[MAX];
  //preencher com índices
  for (k=0; k<MAX; k++)
    a [k] = k;
  //imprimir a
  imprime_vetor(a);
  //somar 2 em cada
  for (k=0; k<MAX; k++)
    a [k] = a[k] + 2;
  //imprimir a
  imprime_vetor(a);
  //zerar os pares
  for (k=0; k<MAX; k++)
    if (a[k] % 2 == 0)
      a[k] = 0;
  //imprimir a
  imprime_vetor(a);
  return 0;
}
