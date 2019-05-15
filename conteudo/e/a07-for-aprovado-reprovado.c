// Determina se 5 alunos foram aprovados ou reprovados
#include <stdio.h>
int main() {
  int contador, numaluno;
  float media;
  // Controle de repetição: executará 5 vezes
  for(contador = 1; contador <= 5; contador++) {
    // Comandos a serem repetidos
    printf("Informe numero e nota do aluno %d: ", contador);
    scanf("%d", &numaluno);
    scanf("%f", &media);
    if (media >=6)
      printf("O aluno %d foi aprovado!\n", numaluno);
    else
      printf("O aluno %d for reprovado!\n", numaluno);
  }
  return 0;
}
