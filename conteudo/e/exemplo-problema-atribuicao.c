/* Program que calcula o número mínimo de notas baseado em um valor */
#include <stdio.h>
int main() {
  int valor; //Entrada
  int valor, nota100, nota50, nota20, nota10, nota5, nota1, num_notas; //Saída
  printf("Insira um valor inteiro\n");
  scanf("%d", &valor);

  valor % 100 = nota100;
  nota100 % 50 = nota50;
  nota50 % 20 = nota20;
  nota20 % 10 = nota10;
  nota10 % 5 = nota5;
  nota5 % 1 = nota1;
  nota100 + nota50 + nota20 + nota10 + nota5 + nota1 = num_notas;
  printf("O número mínimo de notas é %d\n", num_notas) ;
  return 0;
}
