#include <stdio.h>
int main() {
  int alpha = 200; // variável normal do tipo int
  int *nova;       // variável normal do tipo int que é um ponteiro
  int *terra;      // variável normal do tipo int que é um ponteiro
  int *centauri;   // variável normal do tipo int que é um ponteiro

  nova = &alpha;   // o ponteiro nova aponta para o endereço de alpha
  terra = nova;    // o ponteiro terra também aponta para onde nova aponta

  printf("nova : %p - (conteúdo apontado é %d)\n", nova, *nova);
  printf("terra: %p - (conteúdo apontado é %d)\n", terra, *terra);
  centauri = terra + 1; // incrementar em 1 o valor do ponteiro terra
  printf("centauri: %p - (conteúdo apontado é %d)\n", centauri, *centauri);
  return 0;
}
