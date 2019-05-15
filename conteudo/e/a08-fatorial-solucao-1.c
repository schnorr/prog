#include <stdio.h>
int main () {
  int num, fat, i, j;
  printf("Entre um numero inteiro positivo: " );
  scanf("%d", &num);
  if (num < 0)
    printf("Tsk tsk, o número informado é negativo.\n");
  else {
    for (j = 0; j <= num; j++) {
      fat = 1; // se for zero, está pronto
      for (i = j; i >= 1; i--)
	fat = fat * i;
      printf ("Fatorial de %d eh %d.\n", j, fat);
    }
  }
  return 0;
}
