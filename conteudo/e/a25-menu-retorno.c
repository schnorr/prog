#include <stdio.h>

int menu_de_opcoes(void);   //protótipo

int main() {
  int opcao;
  opcao = menu_de_opcoes();
  printf("A opção selecionada foi a '%d'.\n", opcao);
  return 0;
}

int menu_de_opcoes (void) { //implementação
  int opcao;
  printf("Opções disponíveis:\n"
	 "------------------\n\n"
	 "   1 - soma de dois valores reais\n"
	 "   2 - se é divisor do número\n"
	 "   3 - sequência de números pares\n"
	 "   4 - se número é perfeito\n\n"
	 "-> Informe a opção desejada: ");
  scanf("%d", &opcao);
  return opcao;
}
