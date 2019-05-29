int main() {
#include <stdio.h>
#include <string.h>
#define TAMANHO 15
#define NRNOTAS 3
typedef struct aluno {
  char nome[TAMANHO];
  float nota[NRNOTAS];
  float media;
  char conceito;
} aluno_t;
aluno_t le (void);
void mostra (aluno_t aluno);
aluno_t def_media (aluno_t aluno);
aluno_t def_conceito (aluno_t aluno);
return 0;
}
