#include <stdio.h>
int main() {
  char letra;
  for (letra = 'A'; letra <= 'z'; letra++)
    printf("[%c] %03o %03d %03x\n", letra, letra, letra, letra);
  printf("O laço terminou. O valor da letra é:\n"
	 "[%c] %03o %03d %03x\n", letra, letra, letra, letra);
  return 0;
}
