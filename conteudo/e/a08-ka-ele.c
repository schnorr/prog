#include <stdio.h>
int main(){
  int ka, ele;
  for (ka = 1; ka <= 2; ka++)
    for (ele=2; ele<=6;ele= ele + 2)
      printf("ka -> %d -- ele -> %d\n", ka, ele);
}
