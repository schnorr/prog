#include <stdio.h>
int caracteres(char *str) {
  if (str == NULL) return 0;
  if (*str == '\0') return 0;
  return 1 + caracteres(str+1);
}
int main(){
  printf("%d\n", caracteres("o universo se expande"));
  return 0;
}
