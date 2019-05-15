#include <stdio.h>
#define NVAL 20
int main(){
  int pares[NVAL];
  int impares[NVAL];
  int n_pares = 0;
  int n_impares = 0;
  int i;
  int valor;

  printf("Entre com os 20 valores:\n");
  for (i = 0; i < NVAL; i++){
    scanf("%d", &valor);
    if (valor % 2 == 0){
      pares[n_pares] = valor;
      n_pares++;
    }else{
      impares[n_impares] = valor;
      n_impares++;
    }
  }
  printf("Elementos do array com valores pares:\n");
  for (i = 0; i < n_pares; i++){
    printf("%d ", pares[i]);
  }
  printf("\n");
  printf("Elementos do array com valores impares:\n");
  for (i = 0; i < n_impares; i++){
    printf("%d ", impares[i]);
  }
  printf("\n");
  return 0;
}
