/* Indicacao dos alunos com nota menor do que media da turma
Entradas: numero de alunos da turma, codigos e nota dos alunos
Saida: impressao dos numeros e notas dos alunos com nota menor do que media */
#include <stdio.h>
#define MAXTURMA 60
int main() {
  int numero[MAXTURMA];
  float nota[MAXTURMA];
  int tamturma, ind;
  float media = 0;
  do{ // validacao do numero de alunos
    printf("Entre o numero de alunos na turma:");
    scanf("%d", &tamturma);
  }while ( tamturma < 1 || tamturma > 60);

  for (ind = 0; ind < tamturma; ind++) { //leitura dos dados
    printf("Entre o codigo do aluno %d:", ind+1);
    scanf("%d", &numero[ind]);
    printf("Entre a nota do aluno %d:", ind+1);
    scanf("%f", &nota[ind]);
    media += nota[ind];
  }
  media = media / tamturma;
  for (ind = 0; ind < tamturma; ind++) //verificacao das notas
    if (nota[ind] < media)
      printf("Aluno %d com nota %0.2f, abaixo da media\n", numero[ind], nota[ind]);
  return 0;
}
