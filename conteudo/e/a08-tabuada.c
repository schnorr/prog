/* gera a tabuada dos números de 0 a 10:
Entrada: não há
Saida: impressão da tabuada na tela */
#include <stdio.h>
int main () {
  int multiplicando, multiplicador;
  for (multiplicador = 0; multiplicador <= 10; multiplicador++){
    printf("Tabuada de %d:\n", multiplicador);
    for (multiplicando = 0; multiplicando <= 10; multiplicando++) {
      printf("%2d x %2d = %2d\n",
	     multiplicando , multiplicador, multiplicando * multiplicador);
    }
    printf("\n");
  }
  return 0;
}
