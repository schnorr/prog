/* Programa que compara duas strings,
   definindo a diferença entre as duas
   que pode ser: 0 (se iguais),
   valor negativo ou positivo
   (se diferentes) */
#include <stdio.h>
#include <string.h>
#define TAMANHO 20

int main(){
  char s1[TAMANHO];
  char s2[TAMANHO];
  int i;
  int flag;

  //ler a entrada s1
  printf("Entrada s1 -> ");
  fgets(s1, TAMANHO, stdin);
  //remover o \n substituindo-o por \0
  s1[strlen(s1)-1] = '\0';

  //ler a entrada s2
  printf("Entrada s2 -> ");
  fgets(s2, TAMANHO, stdin);
  //remover o \n substituindo-o por \0
  s2[strlen(s2)-1] = '\0';

  i = 0;
  flag = 0;
  while (s1[i] != '\0' && flag == 0){
    printf("[%c] [%c]\n", s1[i], s2[i]);
    flag = s1[i] - s2[i];
    i++;
  }
  flag = s1[i] - s2[i];

  printf("Resultado é %d"
	 " (strcmp diz %d)\n",
	 flag, strcmp(s1, s2))
  return 0;
}
