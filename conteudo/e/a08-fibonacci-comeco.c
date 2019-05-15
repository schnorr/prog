#include<stdio.h>
int main(){
  int pos, fib, t_1, t_2, i;
  printf("Entre um numero inteiro positivo: " );
  scanf("%d", &pos);
  if (pos < 0) printf("Tsk tsk, a posição informada é negativa\n");
  else {

    //o que fazer aqui para resolver nosso objetivo?

    if (pos == 0)
      fib = 0;
    else if (pos == 1)
      fib = 1;
    else{
      t_2 = 0;
      t_1 = 1;
      for (i = 2; i <= pos; i++){
	   fib = t_2 + t_1;
	   t_2 = t_1;
	   t_1 = fib;
      }
    }
    printf ("Fibonacci da posição %d eh %d.\n", pos, fib);
  }
  return 0;
}
