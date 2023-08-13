#include "GeraSalva-Nomes.h"
static char consoante (void) {
  char consoantes[] = { "bcdfghjklmlnpqrstvwx" };
  int nc = strlen(consoantes);
  return consoantes[rand()%nc];
}

static char vogal (void) {
  char vogais[] = { "aeiouy" };
  int nv = strlen(vogais);
  return vogais[rand()%nv];
}

void gera_nome_aleatorio (char *str, int tamanho_maximo) {
  int tamanho_aleatorio = MIN+(rand()%(MAX-MIN));
  for (int i = 0; i < tamanho_maximo &&
                  i < tamanho_aleatorio; i++) {
    *str++ = consoante();
    *str++ = vogal();
  }
  *str = '\0';
}

int gera_idade_aleatoria (int minima, int maxima) {
  return minima+(rand()%(maxima-minima));
}

int gera_altura_aleatoria (int minima, int maxima) {
  return gera_idade_aleatoria (minima, maxima);
}
