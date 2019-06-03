#include <stdio.h>
#include "rev-a32-aluno.h"
#define NRALUNOS 3 // número de alunos da turma
int main()
{
  aluno_t alunos[NRALUNOS] = {0};
  int i;
  for (i = 0; i < NRALUNOS; i++) {
    le(&alunos[i]);
    mostra(&alunos[i]);
  }
  for (i = 0; i < NRALUNOS; i++) {
    def_media(&alunos[i]);
    mostra(&alunos[i]);
  }
  for (i = 0; i < NRALUNOS; i++) {
    def_conceito(&alunos[i]);
    mostra(&alunos[i]);
  }
  return 0;
}
