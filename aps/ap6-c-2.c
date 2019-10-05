#include <stdio.h>
#define TAMMAX 10
int main() {
  int matriz[TAMMAX][TAMMAX];
  int n;
  int i, j, aux;
  int simetrica = 1;
  do {
    printf("Entre a dimensao da matriz: ");
    scanf("%d", &n);
  }while(n > TAMMAX);

  for(i = 0; i < n; i++){
    printf("Entre os elementos da linha %d: ", i+1);
    for(j = 0; j < n; j++){
      scanf("%d", &matriz[i][j]);
    }
  }
  //impressao
  printf("Impressao da matriz\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%3d", matriz[i][j]);
    }
    printf("\n");
  }
  //simetria
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if (matriz[i][j] != matriz[j][i]) {
	      simetrica = 0;
      }
    }
  }
  if (simetrica == 1){
    printf("A matriz lida eh simetrica.\n");
  }else{
    printf("A matriz lida NÃO eh simetrica.\n");
  }
  //troca
  for(j = 0; j < n; j++){
    aux = matriz[0][j];
    matriz[0][j] = matriz[n-1][j];
    matriz[n-1][j] = aux;
  }
  //impressao da troca
  printf("Matriz com primeira linha trocada pela ultima:\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%3d", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
