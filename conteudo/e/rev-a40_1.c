#include <stdio.h>
int digitos (int valor) {
  if (valor == 0) return 0;
  return 1+digitos(valor/10);
}
int main(){
  printf("%d\n", digitos(123456));
  return 0;
}
