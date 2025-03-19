/* processa uma venda e avisa caso se mais de 10
unidades vendidas foram vendidas */
#include<stdio.h>
int main(void)
{
  char codigo;
  int nro_livros;
  float valor_total;
  printf("digite o codigo do produto e número de unidades:\n");
  scanf(" %c %d",&codigo, &nro_livros);
  if (codigo == 'a'|| codigo == 'A') {
    valor_total = nro_livros*10;
    valor_total = valor_total * 0.90;
  }
  if (codigo == 'b'|| codigo == 'B')
    valor_total = nro_livros*20;
  if (codigo == 'c' || codigo == 'C')
    valor_total = nro_livros*30;
  printf("o valor a pagar é de R$ %6.2f.\n", valor_total);
  if (nro_livros > 10)
    printf("Foram vendidas mais de 10 unidades do tipo %c.\n", codigo);
  return 0;
}
