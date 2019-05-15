/* processa uma venda e avisa caso se mais de 10
unidades vendidas foram vendidas */
#include <stdio.h>
int main(){
  char codigo;
  int nro_livros;
  float apagar;

  printf("digite o codigo do produto e número de unidades:\n");
  scanf(" %c %d",&codigo, &nro_livros);

  if (codigo=='a' || codigo == 'A')
    apagar = nro_livros * 10;
  else if (codigo=='b' || codigo == 'B')
    apagar = nro_livros * 20;
  else if (codigo=='c' || codigo == 'C')
    apagar = nro_livros * 30;
  else
    printf("Codigo invalido!\n");

  printf("O valor a ser pago eh R$ %4.2f\n", apagar );
  if (nro_livros > 10)
    printf("Foram vendidas mais de 10 unidades!\n");
  return 0;
}
