#include <stdio.h>
void imprime_ascii(int inicio, int fim);   //protótipo

int main(){
  int a, b;
  printf("Entre o primeiro valor: ");
  scanf("%d", &a);
  printf("Entre o segundo valor: ");
  scanf("%d", &b);
  if (a < b)
    imprime_ascii(a, b);
  else
    imprime_ascii(b, a);
  return 0;
}

void imprime_ascii(int inicio, int fim) { //implementação
  int i;
  for (i = inicio; i <= fim; i++)
    printf("%c ", (char)i);
  printf("\n");
  return;
}
