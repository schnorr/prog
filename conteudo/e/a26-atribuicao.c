#include <stdio.h>
int main() {
  int alpha = 200; // variável normal do tipo int
  int *nova;       // variável normal do tipo int que é um ponteiro
  int *terra;      // variável normal do tipo int que é um ponteiro

  nova = &alpha;   // o ponteiro nova aponta para o endereço de alpha
  terra = nova;    // o ponteiro terra também aponta para onde nova aponta

  printf("Desvendar o endereço de onde encontra-se o ponteiro e seu valor\n");
  printf("nova : %p - (conteúdo apontado é %d)\n", nova, *nova);
  printf("terra: %p - (conteúdo apontado é %d)\n", terra, *terra);
  return 0;
}
