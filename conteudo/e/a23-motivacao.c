#include <stdio.h>
#define MAX 10
int main() {
  int a[MAX], k;
  //preencher com índices
  for (k=0; k<MAX; k++)
    a [k] = k;
  //imprimir a
  for (k=0; k<MAX; k++)
    printf("%3d ",a[k]);
  printf("\n");
  //somar 2 em cada
  for (k=0; k<MAX; k++)
    a [k] = a[k] + 2;
  //imprimir a
  for (k=0; k<MAX; k++)
     printf("%3d ",a[k]);
  printf("\n");
  //zerar os pares
  for (k=0; k<MAX; k++)
    if (a[k] % 2 == 0)
      a[k] = 0;
  //imprimir a
  for (k=0; k<MAX; k++)
    printf("%3d ",a[k]);
  printf("\n");
  return 0;
}
