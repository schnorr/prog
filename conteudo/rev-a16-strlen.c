/* Programa que conta quantos caracteres tem em uma string */
#include <stdio.h>
#include <string.h>
#define TAMANHO 20
int main(){
  char o[TAMANHO];
  int tamanho;
  int i, j;

  //ler a entrada o
  printf("Entrada o -> ");
  fgets(o, TAMANHO, stdin);
  //remover o \n substituindo-o por \0
  o[strlen(o)-1] = '\0';

  //Vamos encontrar o índice do \0 na origem o
  for (i = 0; i < TAMANHO && o[i] != '\0'; i++);
  tamanho = i;
  printf("O tamanho é de %d caracteres (strlen diz que é de %d)\n",
	 tamanho, strlen(o));
  return 0;
}
