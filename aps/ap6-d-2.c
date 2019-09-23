#include <stdio.h>
#include <math.h>
#define TAMMAX 10
int main() {
  float matriz[TAMMAX][TAMMAX];
  int n;
  int i, j;
  float soma;
  int dominante = 1;
  do {
    printf("Entre a dimensao da matriz: ");
    scanf("%d", &n);
  }while(n > TAMMAX);

  for(i = 0; i < n; i++){
    printf("Entre os elementos da linha %d: ", i+1);
    for(j = 0; j < n; j++){
      scanf("%f", &matriz[i][j]);
    }
  }
  //impressao
  printf("Impressao da matriz\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%6.2f", matriz[i][j]);
    }
    printf("\n");
  }
  //dominante
  for(i = 0; i < n; i++){
    soma = 0;
    for(j = 0; j < n; j++){
      soma += matriz[i][j];
    }
    if (fabs(matriz[i][n/2]) < soma){
      dominante = 0;
    }
  }
  if (dominante == 1){
    printf("A matriz lida eh diagonal dominante.\n");
  }else{
    printf("A matriz lida nao eh diagonal dominante.\n");
  }
  //conta elementos não negativos fora da diagonal principal
  int contador = 0;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if (i != j){
	      if (matriz[i][j] >= 0) {
		contador++;
	      }
      }
    }
  }
  printf("A matriz possui %d elementos nao-negativos fora da diagonal principal.\n", contador);
  return 0;
}
