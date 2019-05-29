#include <string.h>
#include <stdio.h>
typedef struct {
  char nome[15];
  float nota[3];
} aluno_t;
void le (aluno_t *aluno) {
  int i;
  printf("Nome: ");
  fgets((*aluno).nome, 15, stdin);
  (*aluno).nome[strlen((*aluno).nome)-1] = '\0';
  for (i = 0; i < 3; i++){
    printf("Nota %d: ", i);
    scanf("%f", (*aluno).nota[i]);
  }
}
