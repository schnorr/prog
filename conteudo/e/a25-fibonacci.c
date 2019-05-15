#include<stdio.h>
//protótipo
int fibonacci (int posicao);

int main() {
  int pos, f;
  printf("Entre inteiro positivo: " );
  scanf("%d", &pos);
  f = fibonacci(pos);
  printf("Valor fib(%d) é %d\n",
	 pos, f);
  return 0;
}

//implementação
int fibonacci (int posicao) {
  int fib; //valor na posição
  int t_1 = 1; //valor na posição ant.
  int t_2 = 0; //valor na posição ant. ant.
  int i;
  for (i = 0; i <= posicao; i++){
    switch (i){
      case 0:
	fib = 0; break;
      case 1:
	fib = 1; break;
      default:
	fib = t_2 + t_1;
	t_2 = t_1;
	t_1 = fib;
    }
    printf ("fib(%d) = %d\n", i, fib);
  }
  return fib;
}
