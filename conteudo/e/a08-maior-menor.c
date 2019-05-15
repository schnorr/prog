#include <stdio.h>
#include <limits.h>
#define ELEM 4
int main (){
  int i, num, maior = INT_MIN, menor = INT_MAX;
    printf("No início: %d (menor), %d (maior)\n", menor, maior);
  for(i = 0; i < ELEM; i++){
    printf("Entre com o numero %d: ", i);
    scanf("%d", &num);
    if (num > maior) maior = num;
    if (num < menor) menor = num;
    printf("Iteração %d, até agora: %d (menor), %d (maior)\n", i, menor, maior);
  }
  printf("O menor numero eh %d, e o maior eh %d\n", menor, maior);
  return 0;
}
