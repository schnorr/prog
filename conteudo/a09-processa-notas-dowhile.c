//Processa notas dos alunos de uma turma
#include <stdio.h>
int main ( )
{
  float n1, n2, n3; //notas de um aluno
  float media, soma; // média do aluno e acumulador de médias da turma
  int al = 0; //variável de contar alunos
  soma=0; // inicializa acumulador de médias
  printf("Informe notas do aluno %d: ", al + 1);
  scanf("%f", &n1); // lê só a primeira nota do 1o aluno
  if (n1 <= 10) { // só executa se a 1a nota for <= 10
    do {
      al = al + 1; // conta este aluno
      scanf("%f%f", &n2, &n3); // lê as outras nota do aluno
      media = (n1 + n2 + n3)/3;
      soma = soma + media;
      printf("\nMedia do aluno %d : %6.2f\n", al, media);
      printf("Informe notas do aluno %d: ",al + 1);
      scanf("%f", &n1); // lê só a primeira nota do próximo aluno
    }while(n1 <= 10);
  }
  if (al > 0) // só calcula média da turma se existir 1 (ou mais) aluno
    printf("\nMedia da turma: %.2f\n", soma/al);
  return 0;
}
