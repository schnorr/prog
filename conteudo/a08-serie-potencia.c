/* Programa para calcular exp(x) de forma aproximada, via series de
potencias
Entradas: valor de x e numero de termos a serem usados na série
Saída: valor aproximado de exp(x) */
#include <stdio.h>
#include <math.h>
int main() {
  int n;            // Entrada: numero de termos
  double x;         // Entrada: valor de x
  double exp_x;     // Saída: exponencial de x
  double termo;     // variavel auxiliar
  int i, cont_fat;  // contadores
  long long fat;    // fatorial
  printf("Entre o valor x e o numero de termos da serie: \n");
  scanf("%lf%d", &x, &n);
  exp_x = 0;
  for (i = 0; i < n; i++) {
    {
      fat = 1;
      for (cont_fat = i; cont_fat >= 1; cont_fat--)
	fat = fat * cont_fat;
    }
    termo = pow(x, i) / fat; // calcula o termo
    exp_x = exp_x + termo; // atualiza valor do somatorio
    printf("Na iteração %d, valor %lf\n", i, exp_x);
  }
  printf("Valor calculado : %lf\n", exp_x);
  printf("Valor de exp(%2.f): %lf\n", x, exp(x));
  return 0;
}
