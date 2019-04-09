/*calcula o fatorial de um numero inteiro
Entrada: numero inteiro positivo
Saida: fatorial do numero */
#include <stdio.h>
int main () {
  int num, fat, i;
  do {
    printf("Entre um numero inteiro positivo: " );
    scanf("%d", &num);
  } while (num < 0);
  fat = 1; // se for zero, está pronto
  for (i= num; i >= 1; i--)
    fat = fat * i;
  printf ("Fatorial de %d eh %d.\n", num, fat);
  return 0;
}
