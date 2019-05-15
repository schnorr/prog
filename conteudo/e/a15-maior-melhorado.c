/* Calcula media de uma turma e informa notas superiores a media
Entradas: notas de 30 alunos
Saidas: media da turma, e impressao das notas maiores do que a media*/
#include <stdio.h>
#define NUMALUNOS 30
int main () {
  float nota [NUMALUNOS] ; //arranjo para as notas
  float media, soma;
  int aluno; // variavel de controle da repeticao
  soma = 0; // inicializa soma
  for (aluno = 0; aluno < NUMALUNOS ; aluno++) { //para cada aluno
    scanf ("%f", &nota[aluno]); // obtem nota
    printf("Nota %2.2f colocada na posição %d\n", nota[aluno], aluno);
    soma += nota[aluno]; // acumula a soma
  }
  media = soma / NUMALUNOS;
  printf("Media da turma: %2.2f\n", media);
  printf("Notas acima da media:\n");
  for (aluno = 0; aluno < NUMALUNOS; aluno++) { // mostra notas > media
    if (nota[aluno] > media)
      printf ("%2.2f\n", nota[aluno]);
  }
  return 0;
}
