#include <stdio.h>

struct elemento_1 {
  char name[2];
  int atomic_number;
  double atomic_weight;
  char metallic;
};

int main() {
  printf ("%d\n", sizeof(struct elemento_1));
  return 0;
}
