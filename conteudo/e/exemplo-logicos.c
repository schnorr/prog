/* Programa que calcula algumas expressões lógicas */
#include <stdio.h>
int main() {
  int a, b, c, d, valor;          //Entrada
  a = 1;
  b = 3;
  c = 5;
  d = 7;
  valor = 9;
  int e1, e2, e3, e4, e5, e6, e7; //Saída

  e1 = (a > b) || (c < d);
  e2 = valor > 10;
  e3 = !(a + c < b);
  e4 = (a == b);
  e5 = (a == b) && (a>=c);
  e6 = (a != b);
  e7 = !((a >= b) || (a+c));

  printf("Entradas: a=%d, b=%d, c=%d, d=%d, valor=%d\n",
	 a, b, c, d, valor);
  printf("Saídas: e1=%d, e2=%d, e3=%d, e4=%d, e5=%d, e6=%d, e7=%d\n",
	 e1, e2, e3, e4, e5, e6, e7);
  return 0;
}
