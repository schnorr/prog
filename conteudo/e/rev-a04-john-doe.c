#include <stdio.h>
int main (){
  int pi, pf, h, min, total_minutos;
  float mp, distancia;
  printf("Entre com o nro de passo do primeiro minuto: ");
  scanf("%d", &pi);
  printf("Entre com o nro de passo do ultimo minuto: ");
  scanf("%d", &pf);
  printf("Entre com o nro de horas e minutos de corrida: ");
  scanf("%d%d", &h, &min);

  printf("Entrada reconhecida:\n"
	 "Passos do primeiro minuto: %d\n"
	 "Passos do último minuto: %d\n"
	 "Duração, horas (%d) e minutos (%d).\n",
	 pi, pf, h, min);

  mp = (pi+pf)/2.0; // media dos passos
  total_minutos = h*60+min;
  distancia = total_minutos*mp*0.0007;
  printf("Distancia total percorrida em km %f\n", distancia);
  return 0;
}
