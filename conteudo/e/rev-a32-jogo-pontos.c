#include "rev-a32-jogo-pontos.h"
void calcula_pontos (resultado_t jo[][NTIMES], time_t times[]) {
  int i, j;
  for (i = 0; i < NTIMES; i++){
    for (j = 0; j < NTIMES; j++){
      if (i != j) {
	  resultado_t *res = &jo[i][j];
	  time_t *local = &times[i];
	  time_t *visitante = &times[j];
	  if (res->local > res->visitante) {
	    local->pontos += 3;
	  }else if (res->local < res->visitante) {
	    visitante->pontos += 3;
	  }else{
	    local->pontos += 1;
	    visitante->pontos += 1;
	  }
      }
    }
  }
}

#include "rev-a32-jogo-pontos.h"
void imprime_pontos (time_t times[]) {
  int i;
  for (i = 0; i < NTIMES; i++){
    time_t *t = &times[i];
    printf("Time %s, %d pontos.\n", t->nome, t->pontos);
  }
}
