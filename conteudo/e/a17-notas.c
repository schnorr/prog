#include <stdio.h>
#define NALUNOS 10
#define NNOTAS 4
int main(){
  //10 alunos, cada um com 4 notas
  float notas[NALUNOS][NNOTAS];
  int a, n, soma, contador = 0;
  float media;
  for (a = 0; a < NALUNOS; a++){
    for (n = 0; n < NNOTAS; n++){
      scanf("%f", &notas[a][n]);
    }
  }

  soma = 0;
  for (a = 0; a < NALUNOS; a++){
    soma += notas[a][0];
  }
  media = (float)soma/NALUNOS;
  //printf da media

  contador = 0;
  for (a = 0; a < NALUNOS; a++){
    if (notas[a][0] > media) contador++;
  }
  //printf do contador
  return 0;
}
