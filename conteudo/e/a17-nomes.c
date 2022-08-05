#include <stdio.h>
#include <string.h>
#define NALUNOS 2
#define NOME_MAX 12 //maior qtadade de caracteres
#define AUXILIAR_MAX 200
int main() {
  //nome com tamanho máximo de 12 caracteres
  char nome[NALUNOS][NOME_MAX+1];
  //variável auxiliar na leitura da cada nome
  char aux[AUXILIAR_MAX];
  //índice para os nomes
  int a;

  // leitura dos dados
  for (a = 0; a < NALUNOS; a++){
    printf("Dados do aluno %d:\n" , a + 1);

    //Vamos ler o nome na variável auxiliar
    do{
      printf("\t Nome: ");
      fgets(aux, AUXILIAR_MAX, stdin);
      aux[strlen(aux)-1] = '\0'; //remove o \n
      //informa do problema
      if(strlen(aux) > NOME_MAX){
	  printf("Nome muito longo (%d bytes), "
		 "deve ser %d bytes no máximo.\n",
		 strlen(aux), NOME_MAX);
      }
    }while(strlen(aux) > NOME_MAX);

    //Vamos copiar para destino final
    strncpy (nome[a], aux, NOME_MAX);
  }

  //imprimir todos os nomes lidos
  for (a = 0; a < NALUNOS; a++){
    printf("Aluno %d: \"%s\"\n", a+1, nome[a]);
  }
  return 0;
}
