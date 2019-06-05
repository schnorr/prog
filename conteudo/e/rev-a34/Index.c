#include "Index.h"
index_t cria_index (atleta_t *a, long posicao) {
  index_t ret;
  strncpy(ret.nome, a->nome, 32);
  ret.posicao = posicao;
  return ret;
}
