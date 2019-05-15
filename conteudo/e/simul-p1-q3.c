#include <stdio.h>
int main(){
  int i;
  int valor;
  scanf("%d", &valor);
  int soma = 0;
  for (i = 0; i < valor; i++){
    if (valor%i == 0){
      soma += i; }
  }
  if (valor == soma){
    printf("É número perfeito.\n");
  }else{
    printf("Não é número perfeito.\n");
  }
  return 0;
}
