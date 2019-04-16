/* Programa que implementa
   o exercício da aula 15 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define TAMANHO 20000
#define MIN 1000
#define MAX 100000
int main(){
  int v[TAMANHO], i;             //P1
  int soma = 0, media;           //P2
  int maior = INT_MIN, pos_maior = -1;
  int menor = INT_MAX, pos_menor = -1;
  int prox = INT_MAX, pos_prox = -1;
  int num, dif;
  srand(0);                      //P3
  for (i = 0; i < TAMANHO; i++){ //P4
    num = rand();                //P4.1
    num = MIN+(num%(MAX-MIN+1)); //P4.2
    v[i] = num;                  //P4.3
    if (v[i] > maior) {          //P4.4
      maior = v[i];
      pos_maior = i;
    }
    if (v[i] < menor) {          //P4.5
      menor = v[i];
      pos_menor = i;
    }
    soma += num;                 //P4.6
  }
  media = soma / TAMANHO;        //P5
  for (i = 0; i < TAMANHO; i++){ //P6
    dif = abs(media - v[i]);     //P6.1
    if (dif < prox){             //P6.2
      prox = dif;
      pos_prox = i;
    }
  }
  printf("%d %d %d %d %d\n",     //P7
	 maior, pos_maior,
	 menor, pos_menor, pos_prox);
  return 0;
}
