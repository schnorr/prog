typedef struct
{
  char nome[50];
  int idade;
  float salario;
} TIPO_FUNCIONARIO;

#include <stdio.h>
#include <string.h>
void limpa_buffer() {
  char c;
  while ((c = getchar()) != '\n' && c != EOF);
}

int le_funcionarios (TIPO_FUNCIONARIO entradas[]) {
  int n = 0;
  int continuar_lendo = 1;
  while (continuar_lendo) {
    printf("Entre o nome do funcionario: ");
    fgets(entradas[n].nome, 50, stdin);
    entradas[n].nome[strlen(entradas[n].nome)-1] = '\0';
    if (strlen(entradas[n].nome) == 0) {
      continuar_lendo = 0;
    }else{
      printf("Entre a idade do funcionario: ");
      scanf("%d", &entradas[n].idade);
      printf("Entre o salario do funcionario: ");
      scanf("%f", &entradas[n].salario);
      limpa_buffer();
      n++;
    }
  }
  return n;
}

void imprime_funcionarios(TIPO_FUNCIONARIO entradas[], int num) {
  int i;
  for (i = 0; i < num; i++){
    printf("%s, Idade: %d, Salario: %.2f\n",
	   entradas[i].nome,
	   entradas[i].idade,
	   entradas[i].salario);
  }
}

void escreve_arquivo(FILE *arq, TIPO_FUNCIONARIO entradas[], int num) {
  fwrite(entradas, sizeof(TIPO_FUNCIONARIO), num, arq);
}

int le_arquivo(FILE *arq, TIPO_FUNCIONARIO entradas[]) {
  int elementos_lidos = 0;
  int n = 0;
  int continuar_lendo = 1;
  while(continuar_lendo) {
    elementos_lidos = fread(&entradas[n], sizeof(TIPO_FUNCIONARIO), 1, arq);
    if (elementos_lidos != 1){
      continuar_lendo = 0;
    }else{
      n++;
    }
  }
  return n;
}

#define MAXFUNC 10
#define MAXSTRING 100
int main (){
  FILE *arquivo = NULL;
  char nome_arquivo[MAXSTRING];
  TIPO_FUNCIONARIO funcionarios[MAXFUNC];
  bzero(funcionarios, sizeof(TIPO_FUNCIONARIO)*MAXFUNC);
  TIPO_FUNCIONARIO funcionarios_2[MAXFUNC];
  bzero(funcionarios_2, sizeof(TIPO_FUNCIONARIO)*MAXFUNC);
  int n_funcionarios = 0;
  // a)
  n_funcionarios = le_funcionarios(funcionarios);
  // b)
  while(arquivo == NULL){
    printf("Entre o nome do arquivo a ser salvo (com extensao): ");
    fgets(nome_arquivo, MAXSTRING, stdin);
    nome_arquivo[strlen(nome_arquivo)-1] = '\0';
    arquivo = fopen(nome_arquivo, "w");
  }
  escreve_arquivo(arquivo, funcionarios, n_funcionarios);
  fclose(arquivo);
  arquivo = NULL;
  // c)
  while(arquivo == NULL){
    printf("Entre o nome do arquivo a ser lido (com extensao): ");
    fgets(nome_arquivo, MAXSTRING, stdin);
    nome_arquivo[strlen(nome_arquivo)-1] = '\0';
    arquivo = fopen(nome_arquivo, "r");
  }
  n_funcionarios = le_arquivo(arquivo, funcionarios_2);
  fclose(arquivo);
  arquivo = NULL;
  // d)
  printf("Impressao dos dados lidos do arquivo:\n");
  imprime_funcionarios(funcionarios_2, n_funcionarios);
  return 0;
}
