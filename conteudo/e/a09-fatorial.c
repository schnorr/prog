/*calcula o fatorial de um numero inteiro
Entrada: numero inteiro positivo
Saida: fatorial do numero ou mensagem de erro */
#include <stdio.h>
int main () {
  int num, fat, i;
  printf("Entre um numero inteiro positivo: " );
  scanf("%d", &num);
  if (num < 0)
    printf("Tsk tsk, o número informado é negativo, "
	   "portanto fatorial não definido.\n");
  else { //implementação como na fórmula
    fat = 1; // se for zero, está pronto
    for (i= num; i >= 1; i--)
      fat = fat * i;
    printf ("Fatorial de %d eh %d.\n", num, fat);
  }
  return 0;
}
