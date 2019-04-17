#include <stdio.h>
int main() {
  char minha_string[5];
  gets(minha_string);
  printf("->[%s]<-\n", minha_string);
  return 0;
}
