#include <stdio.h>
int main() {
  int x[] = {2.3, 4.5};
  int *px;

  px = &x;
  printf("1# *px = %d\n", *px);
  px = px + 1;
  printf("2# *px = %d\n", *px);
  px = px + 1;
  printf("3# *px = %d\n", *px);
  return 0;
}
