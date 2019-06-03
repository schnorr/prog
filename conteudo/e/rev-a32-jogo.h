#ifndef JOGO_H
#define JOGO_H
#include <stdio.h>
#define NTIMES 3
typedef struct {
  char nome[15]; // nome da equipe
  int pontos;    // qtdade de pontos
} time_t;
typedef struct {
  int local;     // qtdade de gols do time local
  int visitante; // qtdade de gols do time visitante
} resultado_t;
#endif
