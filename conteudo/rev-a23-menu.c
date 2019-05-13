#include <stdio.h>

void menu_de_opcoes(void);

int main() {
  int opcao;
  menu_de_opcoes();
  scanf("%d", &opcao);
  printf("A opção selecionada foi a '%d'.\n", opcao);
  return 0;
}

void menu_de_opcoes (void)
{
  printf("Opções disponíveis:\n"
	 "------------------\n\n"
	 "   1 - soma de dois valores reais\n"
	 "   2 - se é divisor do número\n"
	 "   3 - sequência de números pares\n"
	 "   4 - se número é perfeito\n\n"
	 "-> Informe a opção desejada: ");
  return;
}
