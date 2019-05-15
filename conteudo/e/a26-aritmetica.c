#include <stdio.h>
int main() {
  int *nova;       // variável normal do tipo int que é um ponteiro
  int *terra;      // variável normal do tipo int que é um ponteiro
  int *centauri;   // variável normal do tipo int que é um ponteiro
  int alpha = 200; // variável normal do tipo int

  nova = &alpha;   // o ponteiro nova aponta para o endereço de alpha
  terra = nova;    // o ponteiro terra também aponta para onde nova aponta

  printf("nova     (endereço %p): %p\n", &nova, nova);
  printf("terra    (endereço %p): %p\n", &terra, terra);
  centauri = terra + 1; // incrementar em 1 o valor do ponteiro terra
  printf("centauri (endereço %p): %p\n", &centauri, centauri);
  return 0;
}
