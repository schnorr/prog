/*calcula a soma de 2 valores inteiros lidos do teclado */
#include<stdio.h> // biblioteca com operações de entrada e saída
int main( )
{
  int val_1, val_2; // declaração das variáveis de entrada
  int soma;         // declaração da variável resultante
  int nlidos;       // declaração de variável auxiliar

  printf("Informe dois valores:\n"); // mensagem impressa na tela
  nlidos = scanf("%d %d", &val_1, &val_2);   // leitura da informação digitada
  soma = val_1 + val_2;   // armazena resultado em soma
  printf("Resultado da soma: %d (%d)\n", soma, nlidos); // e mostra na tela
  nlidos = scanf("%d", &val_1);
  printf("Mais um elemento lido: %d (%d)\n", val_1, nlidos);
  return 0; // encerra o programa de forma correta
}
