/* Obtem coordenadas e informa localização */
#include <stdio.h>
int main() {
  float x, y; //Entrada
  printf("Coordenadas: x = ");
  scanf("%f", &x);
  printf("e y = ");
  scanf("%f", &y);

  // identifica origem e eixos
  if ( x == 0 ) // x = 0: possibilidade de origem ou eixo y
    if (y == 0 ) // y também = 0: localizou origem
      printf("\n Ponto na origem");
    else // só pode ser eixo y
      printf("\n Ponto no eixo dos y"); 
  else // x certamente é diferente de zero: não testa mais!
    if ( y == 0 ) // localizou eixo x
      printf("\n Ponto no eixo dos x");
    else // só sobraram os quadrantes!!!
      if ( x > 0 ) // quadrantes 1 ou 4, dependendo de y
	if ( y > 0 ) // quadrante 1
	  printf("\n Ponto no quadrante 1");
	else // quadrante 4, sem precisar mais testes
	  printf("\n Ponto no quadrante 4");
      else // x é < 0: sobraram quadrantes 2 e 3, dependendo de y
	if ( y > 0 )
	  printf("\n Ponto no quadrante 2");
	else // sobrou x < 0 e y < 0: não precisa testar
	  printf("\n Ponto no quadrante 3");
  printf("\n");
  return 0;
}
