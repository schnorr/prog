#include <stdio.h>
//protótipo da função (apenas sua declaração)
void imprime(char c, int n);
//função principal
int main() {
  int num = 10;
  char letra = 'a';
  imprime(letra, num);
  return 0;
}
//a implementação da função (com cabeçalho idêntico ao protótipo)
void imprime(char c, int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("%c", c);
  printf("\n");
  return;
}
