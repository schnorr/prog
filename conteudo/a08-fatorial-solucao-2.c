#include <stdio.h>
int main () {
  int num, fat, i, j;
  printf("Entre um numero inteiro positivo: " );
  scanf("%d", &num);
  if (num < 0)
    printf("Tsk tsk, o número informado é negativo.\n");
  else {
    for (i = 0; i <= num; i++){
      if (i == 0){
	fat = 1;
      }else{
	fat = fat * i;
      }
      printf ("Fatorial de %d eh %d.\n", i, fat);
    }
  }
  return 0;
}
