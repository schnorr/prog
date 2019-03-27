#include <stdio.h>
int main () {
  int cod;
  printf("Codigo (1 a 4): ");
  scanf ("%d", &cod);
  switch (cod) {
  case 1:
    printf ("Mensagem 1.\n");
  case 2:
    printf ("Mensagem 2.\n");
  case 3:
    printf ("Mensagem 3.\n");
  case 4:
    printf ("Mensagem 4.\n");
  default:
    printf ("Mensagem de erro.\n");
  }
  return 0;
}
