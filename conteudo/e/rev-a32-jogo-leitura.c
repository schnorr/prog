#include "rev-a32-jogo-leitura.h"
static void le_um_resultado (resultado_t *res, time_t *local, time_t *visitante) {
  printf("Jogo: %s (Local) vs %s (Visitante):\n", local->nome, visitante->nome);
  printf("\tQtdade de gols de %s (Local): ", local->nome);
  scanf("%d", &res->local);
  printf("\tQtdade de gols de %s (Visitante): ", visitante->nome);
  scanf("%d", &res->visitante);
}
void le_todos_os_resultados (resultado_t jo[][NTIMES], time_t times[]) {
  int i, j;
  for (i = 0; i < NTIMES; i++){
    for (j = 0; j < NTIMES; j++){
      if (i != j) {
	 le_um_resultado(&jo[i][j], &times[i], &times[j]);
      }
    }
  }
}
