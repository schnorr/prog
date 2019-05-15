#include <stdio.h>
void troca (int x, int y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
  return;
}
int main() {
  int a, b;
  a = 5;
  b = 10;
  printf("#1: a = %d, b = %d\n", a, b);
  troca(a, b);
  printf("#2: a = %d, b = %d\n", a, b);
  return 0;
}
