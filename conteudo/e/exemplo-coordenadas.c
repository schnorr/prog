/* Obtem coordenadas e informa localização */
#include <stdio.h>
int main() {
  float x, y; //Entrada
  printf("Coordenadas: x = ");
  scanf("%f", &x);
  printf("e y = ");
  scanf("%f", &y);
  if ( x == 0 && y == 0 )
    printf("\n Ponto na origem");
  if ( x > 0 && y > 0 )
    printf("\n Ponto no quadrante 1");
  if ( x < 0 && y > 0 )
    printf("\n Ponto no quadrante 2");
  if ( x < 0 && y < 0 )
    printf("\n Ponto no quadrante 3");
  if ( x > 0 && y < 0 )
    printf("\n Ponto no quadrante 4");
  if ( x == 0 && y != 0 )
    printf("\n Ponto no eixo dos y");
  if ( x != 0 && y == 0 )
    printf("\n Ponto no eixo dos x");
  printf("\n");
  return 0;
}
