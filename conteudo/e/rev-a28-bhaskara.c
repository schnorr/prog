#include <stdio.h>
#include <math.h>
void bhaskara (float a, float b, float c, float *x1, float *x2);
int main () {
  float x, y, z, r1, r2;
  scanf("%f%f%f", &x, &y, &z);
  bhaskara(x, y, z, &r1, &r2); // passamos o endereço de r1 e r2
  printf("%f e %f\n", r1, r2);
  return 0;
}

void bhaskara (float a, float b, float c, float *x1, float *x2) {
  float raizdisc;
  raizdisc = sqrt(b*b-4*a*c); // raiz do discriminante
  *x1 = (-b + raizdisc)/(2*a);
  *x2 = (-b - raizdisc)/(2*a);
  return;
}
