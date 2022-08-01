/* Procura por s2 em s1 */
#include <stdio.h>
#include <string.h>
#define MAXIMO 100
#define TAMANHO 10
int main(){
  char s1[MAXIMO];
  char s2[TAMANHO];
  int i, j, k, flag;

  //ler a entrada s1
  printf("Entrada s1 -> ");
  fgets(s1, MAXIMO, stdin);
  //remover o \n substituindo-o por \0
  s1[strlen(s1)-1] = '\0';

  //ler a entrada s2
  printf("Entrada s2 -> ");
  fgets(s2, TAMANHO, stdin);
  //remover o \n substituindo-o por \0
  s2[strlen(s2)-1] = '\0';

  for (i = 0;
       i < MAXIMO && s1[i] != '\0';
       i++) {
    j = i;
    k = 0;
    flag = 0;
    while (k < TAMANHO &&
	   s1[j] != '\0' &&
	   s2[k] != '\0' &&
	   flag == 0){
      flag = s1[j] - s2[k];
      j++;  
      k++;
    }
    if (flag == 0){
      printf("[%s] encontrado "
	     "na posição %d\n", s2, i);
    }
  }
  return 0;
}
