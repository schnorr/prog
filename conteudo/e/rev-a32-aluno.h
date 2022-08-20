#include <stdio.h>
#include <string.h>
#define TAMANHO 100 // maior nome possível
#define NRNOTAS 3  // número de notas
typedef struct aluno {
  char nome[TAMANHO];
  float nota[NRNOTAS]; // vetor é um tipo de variável (indexada)
  float media;
  char conceito;
} aluno_t;
void le (aluno_t *aluno);
void mostra (aluno_t *aluno);
void def_media (aluno_t *aluno);
void def_conceito (aluno_t *aluno);
