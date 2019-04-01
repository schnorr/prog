// Imprime numeros pares de um intervalo dado
// garante que o primeiro nro é menor do que o segundo
#include <stdio.h>
int main() {
  int val1, val2, inic, fim, controle;
  printf("Informe 2 numeros naturais: ");
  scanf("%d%d", &val1, &val2);
  if (val1 > val2){
    inic = val2; fim = val1;
  }else{
    inic = val1; fim = val2;
  }
  if (inic%2)
    inic = inic + 1; // gera seq apenas com nros pares!
  for ( controle = inic; controle <= fim; controle = controle+2)
    printf("%d ", controle);
  printf("\n")
  return 0;
}
