#include <stdio.h>
int main () {
  int num, fat, i;
  printf("Entre um numero inteiro positivo: " );
  scanf("%d", &num);
  if (num < 0)
    printf("Tsk tsk, o número informado é negativo.\n");
  else {
    //o que fazer aqui para resolver nosso objetivo?
    fat = 1; // se for zero, está pronto
    for (i = num; i >= 1; i--)
      fat = fat * i;
    printf ("Fatorial de %d eh %d.\n", num, fat);
  }
  return 0;
}
