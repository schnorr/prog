#include "rev-a32-jogo.h"
#include "rev-a32-jogo-leitura.h"
#include "rev-a32-jogo-pontos.h"
int main() {
  time_t times[NTIMES] = {{"Alemanha", 0}, {"Franca", 0}, {"Brasil", 0}};
  resultado_t jogos[NTIMES][NTIMES];
  le_todos_os_resultados (jogos, times);
  calcula_pontos (jogos, times);
  imprime_pontos (times);
  return 0;
}
