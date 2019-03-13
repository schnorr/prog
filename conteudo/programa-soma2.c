/*calcula a soma de 2 valores inteiros lidos do teclado */
#include<stdio.h> // biblioteca com operações de entrada e saída
int main( )
{
  int val1, val2;       // declaração das variáveis de entrada
  int soma;             // declaração da variável resultante

  printf("Valor 1:\n"); // mensagem impressa na tela
  scanf("%d", &val1);   // leitura da informação digitada
  printf("Valor 2:\n");
  scanf("%d", &val2);
  soma = val1 + val2;   // armazena resultado em soma
  printf("Resultado da soma: %d\n", soma); // e mostra na tela
  return 0;             // encerra o programa de forma correta
}
