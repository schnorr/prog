#ifndef GERASALVA_H
#define GERASALVA_H
#include <stdio.h>
#include "GeraSalva-Nomes.h"
#define NATLETAS 2000000
#define FATLETAS "atletas.bin"
typedef struct {
  char nome[32];
  int idade;     // anos completos
  int altura;    // em centimetros
} atleta_t;
#endif
