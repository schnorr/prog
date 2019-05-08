#include <stdio.h>
#define MAX 10
int a[MAX]; //global
int imprime_vetor () {
  int k;
  for (k=0; k<MAX; k++)
    printf("%3d ",a[k]);
  printf("\n");
  return 0;
}
int main() {
  int k;
  //preencher com índices
  for (k=0; k<MAX; k++)
    a [k] = k;
  //imprimir a
  imprime_vetor();
  //somar 2 em cada
  for (k=0; k<MAX; k++)
    a [k] = a[k] + 2;
  //imprimir a
  imprime_vetor();
  //zerar os pares
  for (k=0; k<MAX; k++)
    if (a[k] % 2 == 0)
      a[k] = 0;
  //imprimir a
  imprime_vetor();
  return 0;
}
