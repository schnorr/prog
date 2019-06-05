#ifndef INDEX_H
#define INDEX_H
#include <stdio.h>
#include "GeraSalva.h"
#define FINDEX "index.bin"
typedef struct {
  char nome[32];
  long posicao;
} index_t;
index_t cria_index (atleta_t *a, long posicao);
#endif
