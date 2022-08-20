#include <stdio.h>
int main() {
  int alpha; // uma variável normal (tipo int)
  int conta; // uma variável normal (tipo int)
  int *var;  // uma variável normal que é um ponteiro para int

  var = &conta; // var recebe o endereço de count
  conta = 26;
  alpha = *var; // alpha recebe o conteúdo apontado por var

  printf("Todos os valores em hexadecimal:\n");
  printf("alpha (endereço %x) = %d \n", &alpha, alpha);
  printf("conta (endereço %x) = %d \n", &conta, conta);
  printf("var   (endereço %x) = %x, conteúdo apontado %d\n", &var, var, *var);
  return 0;
}
