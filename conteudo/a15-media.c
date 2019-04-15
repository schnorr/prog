/*calcula media de uma turma
Entradas: notas de 30 alunos
Saida: media da turma */
#include <stdio.h>
#define NUMALUNOS 30
int main () {
  float nota; // nota de um aluno
  float media, soma;
  int aluno; //variável de controle da repeticao
  soma = 0; // inicializa a soma das notas
  for (aluno = 1; aluno <= NUMALUNOS; aluno++) { // para cada aluno da turma
    scanf("%f", &nota); //obtem a nota do aluno
    soma += nota;
  }
  media = soma / NUMALUNOS;
  printf("Media da turma: %2.2f\n", media);
  return 0;
}
