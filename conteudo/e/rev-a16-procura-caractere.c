/* Procura por caractere */
#include <stdio.h>
#include <string.h>
#define TAMANHO 200

int main(){
  char s1[TAMANHO];
  char c;
  int i, flag;
  //ler a entrada s1
  printf("Entrada s1 -> ");
  fgets(s1, TAMANHO, stdin);
  //remover o \n substituindo-o por \0
  s1[strlen(s1)-1] = '\0';
  //ler o caractere c
  printf("Caractere -> ");
  scanf(" %c", &c);

  i = 0;
  flag = 0;
  while (s1[i] != '\0' && flag == 0){
    if (s1[i] == c){
      flag = 1;
    }
    i++;
  }
  if (flag){
    printf("[%c] encontrado "
	   "na posição %d\n", c, i-1);
  }else{
    printf("[%c] não encontrado.\n", c);
  }
  return 0;
}
