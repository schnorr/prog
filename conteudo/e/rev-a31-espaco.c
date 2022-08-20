#include <stdio.h>

struct elemento {
  char name[2];
  int atomic_number;
  double atomic_weight;
  char metallic;
};

int main() {
  printf ("%d\n", sizeof(struct elemento));
  return 0;
}
