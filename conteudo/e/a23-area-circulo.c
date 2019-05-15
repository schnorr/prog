// Calcula a área de um circulo, utilizando a função pow.
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define PI 3.141618 // não existe esta constante em C
int main() {
  float raio, area;
  char circulo;
  printf("Forneça o identificador do círculo: ");
  scanf(" %c", &circulo);
  circulo = toupper(circulo);
  printf("Forneca o raio do circulo %c: ", circulo);
  scanf("%f", &raio);
  area = PI * pow(raio, 2);
  printf("Area do circulo %c de raio %6.2f eh %6.2f \n", circulo, raio, area);
  return 0;
}
