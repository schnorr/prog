/* Programa que copia caracteres da string o para a string d */
#include <stdio.h>
#include <string.h>
#define TAMANHO 10
int main(){
  char o[TAMANHO];
  char d[TAMANHO];
  int i;
  //ler a entrada
  printf("Entrada -> ");
  fgets(o, TAMANHO, stdin);
  //remover o \n substituindo-o por \0
  o[strlen(o)-1] = '\0';

  //copiar para destino
  for (i = 0; i < TAMANHO && o[i] != '\0'; i++){
    d[i] = o[i];
  }
  d[i] = '\0';
  printf ("Saída -> [%s]\n", d);
  return 0;
}
