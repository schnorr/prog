#include <stdio.h>
int main () {
  int cod;
  printf("Codigo (1 a 4): ");
  scanf ("%d", &cod);
  switch (cod) {
    case 1:
      printf ("Mensagem 1.\n");
      break;
    case 2:
      printf ("Mensagem 2.\n");
      break;
    case 3:
      printf ("Mensagem 3.\n");
      break;
    case 4:
      printf ("Mensagem 4.\n");
      break;
    default:
      printf ("Mensagem de erro.\n");
      break;
  }
  return 0;
}
