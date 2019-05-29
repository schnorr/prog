#include <stdio.h>
#include <string.h>
#define NRNOTAS 3
#define NRALUNOS 3
typedef struct {
  char nome[15];
  float nota[NRNOTAS];
} aluno_t;

void le (aluno_t *a) {
  int i;
  printf("Nome: ");
  fgets((*a).nome, 15, stdin);
  (*a).nome[strlen((*a).nome)-1] ='\0';
  for (i = 0; i < NRNOTAS; i++){
    printf("Nota %d: ", i);
    scanf("%f", &(*a).nota[i]);
  }
}

void mostra (aluno_t *a) {
  int j;
  printf("Aluno \'%s\' (Notas: ",
	 (*a).nome);
  for (j = 0; j < NRNOTAS; j++) {
    printf("%.2f", (*a).nota[j]);
    if (j+1 < NRNOTAS) printf(" ");
  }
  printf(")");
  return;
}

int main() {
  aluno_t alunos[NRALUNOS] = {0};
  int i;
  for (i = 0; i < NRALUNOS; i++) {
    le(&alunos[i]);
    mostra(&alunos[i]);
  }
  return 0;
}
