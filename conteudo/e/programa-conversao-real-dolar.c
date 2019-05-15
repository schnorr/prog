/* Calcula e conversão de Real para Dolar */
#include <stdio.h> // biblioteca com operações de I/O
int main()
{
  float Preco, Taxa;          // Valores em real declarados float
  float PrecoEmDolar;         // tipo da variável resultante
  printf("Valor em real:\n"); // mensagem impressa na tela
  scanf("%f", &Preco);        // leitura da informação digitada
  printf("Taxa conversao :\n");
  scanf("%f", &Taxa);
  PrecoEmDolar = Preco *Taxa;
  printf("Preco em dolar: %f\n", PrecoEmDolar); // mostra
  return 0; // encerra o programa e retorna zero ao Sist Op
}
