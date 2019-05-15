#include <stdio.h>
int main() {
  float x = 100;
  int *p;

  p = &x;

  printf("%p\n", p);
  return 0;
}
