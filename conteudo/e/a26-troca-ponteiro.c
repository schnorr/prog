#include <stdio.h>
void troca (int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
  return;
}
int main() {
  int a = 5;
  int b = 10;
  printf("#1: a = %d, b = %d\n", a, b);
  troca(&a, &b); //chamada de função, passagem por valor (é feita uma cópia)
  printf("#2: a = %d, b = %d\n", a, b);
  return 0;
}
