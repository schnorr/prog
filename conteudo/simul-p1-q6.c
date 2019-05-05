#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  double S, termo, x, y, numx, numy;
  int den, expx, expy, sinal;

  do{
    printf("Valor de x: ");
    scanf("%lf", &x);
  }while (x <= -0.5 || x >= 0.75);
  do{
    printf("Valor de y:");
    scanf("%lf", &y);
  }while (y < -1 || y > 1);

  expx = 25;
  expy = 1;
  sinal = 1;
  S = 0;

  for (den = 1; den < 26; den++)  {
    numx = pow(x, expx);
    numy = pow(y, expy);
    termo = sinal*numx*numy/den;
    S += termo;
    expx -= 1;
    expy += 1;
  }
  printf("Valor de S: %lf\n", S);
  return 0;
}
