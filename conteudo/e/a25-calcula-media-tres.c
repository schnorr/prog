#include <stdio.h>
void calcula_media(float n1, float n2, float n3) {
  float m;
  m = (n1 + n2 + n3) / 3;
  printf("A media vale %3.2f\n", m);
  return;
}

int main() {
  float a,b,c;
  a = 3.2;
  b = 5.4;
  c = -11.7;
  calcula_media(a, b, c); //chamada da função
  return 0;
}
