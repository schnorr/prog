#include <stdio.h>
#include <ctype.h>
int main()
{
  char tipo_de_ovo;
  int quantidade;
  float preco;

  printf("Entre com o tipo de ovo: ");
  scanf("%c", &tipo_de_ovo);
  tipo_de_ovo = toupper(tipo_de_ovo);
  printf("Entre com a quantidade: ");
  scanf("%d", &quantidade);
  printf("Ovo tipo [%c], quantidade [%d].\n", tipo_de_ovo, quantidade);

  switch(tipo_de_ovo){
  case 'A':
    if (quantidade > 50){
      printf("Quantidade maxima igual a 50!\n");
      quantidade = 50;
    }
    preco = quantidade * 12.00;
    break;
  case 'B':
    if (quantidade > 30){
      printf("Quantidade maxima igual a 30!\n");
      quantidade = 30;
    }
    preco = quantidade * 15.50;
    break;
  case 'C':
    if (quantidade > 20){
      printf("Quantidade maxima igual a 20!\n");
      quantidade = 20;
    }
    preco = quantidade * 21.30;
    break;
  default:
    printf("Tipo de ovo invalido!\n");
  }

  if(tipo_de_ovo == 'A' || tipo_de_ovo == 'B' || tipo_de_ovo == 'C'){
    printf("Venda de %d ovos do tipo %c com preco total %.2f\n",
	   quantidade, tipo_de_ovo, preco);
  }
  return 0;
}
