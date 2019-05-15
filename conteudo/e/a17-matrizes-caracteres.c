#include <stdio.h>
#include<string.h>
#define TAM_TURMA 40
#define TAM_NOME 20
int main() {
  char nome[TAM_TURMA][TAM_NOME];
  float nota[TAM_TURMA];
  int freq[TAM_TURMA];
  char tela[TAM_TURMA+10];
  int tam, i;
  // leitura das entradas
  printf("Tamanho da turma: ");
  scanf("%d", &tam);
  getchar();
  for (i = 0;
       i < tam && i < TAM_TURMA;
       i++) {
    printf("Nome %d:", i);
    fgets(nome[i], TAM_NOME, stdin);
    nome[i][strlen(nome[i])-1] = '\0';
    printf("[%s]\n", nome[i]);
    printf("Nota %d:", i);
    scanf("%f", &nota[i]);
    printf("Frequência %d:", i);
    scanf("%d", &freq[i]);
  }


  printf("\n\n");
  // imprime os nomes dos alunos
  // e o conceito final
  for (i = 0;
       i < tam && i < TAM_TURMA;
       i++) {
    strcpy(tela, nome[i]);
    if (freq[i] < .75 * 45)
      strcat(tela, ": conceito FF");
    else
      if (nota[i]>8.4)
	strcat(tela, ": conceito A");
      else
	if (nota[i]>7.4)
	  strcat(tela, ": conceito B");
	else
	  if (nota[i]>5.9)
	    strcat(tela, ": conceito C");
	  else
	    strcat(tela, ": conceito D");
    printf("%s\n", tela);
  }
  return 0;
}
