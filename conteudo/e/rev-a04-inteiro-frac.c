// Converte valor real em dois valores inteiros: exemplos de soluções
#include<stdio.h>
#include<math.h> // para uso da função round
int main( )
{
  float valor; // variável float
  int pint, pdecimal; // parte inteira e parte decimal, convertidas para inteiro

  // Extraindo números inteiros de um número decimal:
  printf(" *** Conversoes de valores float ***\n ");
  printf("Informe o valor a ser convertido:");
  scanf("%f", &valor);
  pint = (int) valor;
  pdecimal = (int)((valor-pint)*100); //cast, para obter parte inteira
  printf("parte inteira = %d, parte decimal = %d (aqui, sem o round!!!)\n",
	 pint, pdecimal);
  pdecimal = (int)(round((valor-pint)*100)); //função para obter parte inteira
  printf("parte inteira = %d, parte decimal = %d (com o round!!!)\n",
	 pint, pdecimal);
  return 0;
}
