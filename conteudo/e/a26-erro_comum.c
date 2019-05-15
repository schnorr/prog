#include <stdio.h>
int main() {
  int x = 10;
  int *p;

  *p = x;

  printf("*p = %d\n", *p);
  return 0;
}
