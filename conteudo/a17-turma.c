#include <stdio.h>
#include <string.h>
#define NALUNOS 2
#define NNOTAS 3 //quantidade de notas
#define NOME_MAX 12 //maior qtadade de caracteres
#define AUXILIAR_MAX 200
int main() {
  //com a média calculada na última coluna
  float nota[NALUNOS][NNOTAS+1];
  //nome com tamanho máximo de 12 caracteres
  char nome[NALUNOS][NOME_MAX+1];
  //variável para auxilair na leitura da cada nome
  char aux[AUXILIAR_MAX];
  //índice para os nomes e notas
  int a, n;
  //acumulador das notas para média
  float soma;

  // leitura de dados
  for (a = 0; a < NALUNOS; a++){
    printf("Dados do aluno %d:\n" , a + 1);
    printf("\t Nome: ");

    //Vamos ler o nome na variável auxiliar
    fgets(aux, AUXILIAR_MAX, stdin);
    aux[strlen(aux)-1] = '\0'; //remove o \n
    while(strlen(aux) > NOME_MAX){
      printf("Nome muito longo (%d bytes), "
	     "deve ser %d bytes no máximo.\n",
	     strlen(aux), NOME_MAX);
      printf("\t Nome: ");
      fgets(aux, AUXILIAR_MAX, stdin);
      aux[strlen(aux)-1] = '\0'; //remove o \n
    }

    //Vamos copiar para destino final
    strncpy (nome[a], aux, NOME_MAX);

    //Vamos ler as três notas
    soma = 0;
    for (n = 0; n < NNOTAS; n++){
      printf("\t Nota %d: ", n + 1);
      scanf("%f", &nota[a][n]);
      soma += nota[a][n];
      //limpa o buffer de entrada
      char c;
      while ((c = getchar()) != '\n' && c != EOF);
    }
    nota[a][n] = soma / NNOTAS;
  }

  //imprimir todos os nomes lidos
  for (a = 0; a < NALUNOS; a++){
    printf("Aluno %d: \"%s\", com notas: ",
	   a+1, nome[a]);
    for (n = 0; n < NNOTAS; n++){
      printf("%.2f ", nota[a][n]);
    }
    printf("e média %.2f.\n", nota[a][n]);
  }
  return 0;
}
