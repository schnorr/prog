#include <stdio.h>
#define NATLETAS 3
#define TAMANHO
int main() {
  char nomes[][TAMANHO] = {"Solar", "Alpha", "Centauri"};
  int idades[NATLETAS];
  for (int i = 0; i < NATLETAS; i++){
    printf("%s\n", nomes[i]);
  }
  return 0;
}
