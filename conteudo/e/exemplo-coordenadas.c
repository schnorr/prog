/* Obtem coordenadas e informa localização */
#include <stdio.h>
int main() {
  float x, y; //Entrada
  printf("Coordenadas: x = ");
  scanf("%f", &x);
  printf("e y = ");
  scanf("%f", &y);
  if ( x == 0 && y == 0 )
    printf("Ponto na origem.\n");
  if ( x > 0 && y > 0 )
    printf("Ponto no quadrante 1.\n");
  if ( x < 0 && y > 0 )
    printf("Ponto no quadrante 2.\n");
  if ( x < 0 && y < 0 )
    printf("Ponto no quadrante 3.\n");
  if ( x > 0 && y < 0 )
    printf("Ponto no quadrante 4.\n");
  if ( x == 0 && y != 0 )
    printf("Ponto no eixo dos y.\n");
  if ( x != 0 && y == 0 )
    printf("Ponto no eixo dos x.\n");
  return 0;
}
