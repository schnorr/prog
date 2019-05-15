#include <stdio.h>
float calcula_media(float n1, float n2, float n3) {
  float media;
  media = (n1 + n2 + n3) / 3;
  return media;
}

int main() {
  float a, b, c, final;
  a = 3.2;
  b = 5.4;
  c = -11.7;
  final = calcula_media(a, b, c); //chamada da função
  printf("A media vale %3.2f\n", final);
  return 0;
}
