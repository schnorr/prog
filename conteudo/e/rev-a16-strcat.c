/* Programa que concatena caracteres
   da string d no final da string o */
#include <stdio.h>
#include <string.h>
#define TAMANHO 20
int main(){
  char o[TAMANHO];
  char d[TAMANHO];
  int i, j;

  //ler a entrada o
  printf("Entrada o -> ");
  fgets(o, TAMANHO, stdin);
  //remover o \n substituindo-o por \0
  o[strlen(o)-1] = '\0';

  //ler a entrada d
  printf("Entrada d -> ");
  fgets(d, TAMANHO, stdin);
  //remover o \n substituindo-o por \0
  d[strlen(d)-1] = '\0';

  //Vamos encontrar o índice do \0
  for (i = 0;
       i < TAMANHO && o[i] != '\0';
       i++);

  //Vamos iniciar a concatenação
  //a partir de i
  for (j = 0;
       i < TAMANHO && d[j] != '\0';
       i++, j++){
    o[i] = d[j];
  }
  o[i] = '\0';

  printf ("Saída em o -> [%s]\n", o);
  printf ("Imprimir cada caractere\n");
  for (i = 0;
       i < TAMANHO && o[i] != '\0';
       i++){
    printf("%d [%c]\n", i, o[i]);
  }
  return 0;
}
