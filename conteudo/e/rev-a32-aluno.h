#include <stdio.h>
#include <string.h>
#define NRNOTAS 3  // número de notas
typedef struct {
  char nome[15 + 1];
  float nota[NRNOTAS];
  float media;
  char conceito;
} aluno_t;
void le (aluno_t *aluno);
void mostra (aluno_t *aluno);
void def_media (aluno_t *aluno);
void def_conceito (aluno_t *aluno);
